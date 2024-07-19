x.erase(remove_if(x.begin(), x.end(), [](int num) {
    string s = to_string(num);
    return any_of(s.begin(), s.end(), [](char c) { return c % 2 == 0; });
  }), x.end());
  
  sort(x.begin(), x.end());
  return x;
}