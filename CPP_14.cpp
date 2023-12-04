```
vector<string> all_prefixes(const string& str) {
  vector<string> prefixes;
  for (int i = 0; i < str.size(); ++i) {
    prefixes.push_back(str.substr(0, i + 1));
  }
  return prefixes;
}
```