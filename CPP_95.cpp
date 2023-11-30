bool check_dict_case(map<string, string> dict) {
  if (dict.empty()) {
    return false;
  }
  
  bool all_lower_case = true;
  bool all_upper_case = true;
  
  for (const auto& pair : dict) {
    const string& key = pair.first;
    
    for (char c : key) {
      if (islower(c)) {
        all_upper_case = false;
      } else if (isupper(c)) {
        all_lower_case = false;
      }
    }
  }
  
  return all_lower_case || all_upper_case;
}