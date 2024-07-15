transform(s.begin(), s.end(), s.begin(), ::tolower);
  int count = count_if(s.begin(), s.end(), [](char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
  });
  if (!s.empty() && (s.back() == 'y')) { 
    count--;
  }
  return count;
}