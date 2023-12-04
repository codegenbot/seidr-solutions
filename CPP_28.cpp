```
string concatenate(const vector<string>& strings) {
  string result;
  for (auto& s : strings) {
    result += s;
  }
  return result;
}
```