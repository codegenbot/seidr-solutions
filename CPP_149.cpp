vector<string> sorted_list_sum(vector<string> lst){
  lst.erase(
    remove_if(lst.begin(), lst.end(), [](const string& s){
      return s.length() % 2 == 1;
    }),
    lst.end()
  );
  
  sort(lst.begin(), lst.end(), [](const string& s1, const string& s2){
    if(s1.length() < s2.length()){
      return true;
    }
    if(s1.length() > s2.length()){
      return false;
    }
    return s1 < s2;
  });
  
  return lst;
}