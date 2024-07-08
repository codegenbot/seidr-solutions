std::list<int> indicesOfSubstring(const std::string& text, const std::string& target) {
  int prev_idx = -1;
  std::list<int> result;
  for (size_t i = 0; i < text.length(); ++i) {
      if (text.find(target) != std::string::npos && i >= prev_idx + target.length()) {
          if (i - prev_idx > target.length()) {
              result.push_back(i);
              prev_idx = i; // Update prev_idx for non-overlapping targets
          }
      }
  }
  return result;
}