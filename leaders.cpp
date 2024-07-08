std::vector<int> leaders(const std::vector<int>& v) {
  std::vector<int> result;
  int max_value = INT_MIN;
  for (auto it = v.begin(); it != v.end(); ++it) {
      if (*it >= max_value) {
          result.push_back(*it);
          max_value = *it;
      }
  }
  return result;
}