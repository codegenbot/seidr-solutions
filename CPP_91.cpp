int is_bored(string S){
  int count = 0;
  int len = S.length();
  
  if (S[0] == 'I')
    count++;
  
  for (int i = 1; i < len; i++) {
    if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && S[i-1] == ' ')
      if (S[i-2] == 'I')
        count++;
  }
  
  return count;
}