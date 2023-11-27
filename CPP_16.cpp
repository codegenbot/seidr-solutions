int count_distinct_characters(string str) {
  vector<char> distinctChars;

  for (char c : str) {
    char lower = tolower(c);
    if (find(distinctChars.begin(), distinctChars.end(), lower) == distinctChars.end()) {
      distinctChars.push_back(lower);
    }
  }

  return distinctChars.size();
}