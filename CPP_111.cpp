map<char, int> histogram(string test){
  map<char, int> result;
  istringstream iss(test);
  string word;
  while(iss >> word){
    for(char c : word){
      result[c]++;
    }
  }
  int maxCount = 0;
  for(auto it : result){
    maxCount = max(maxCount, it.second);
  }
  map<char, int> ans;
  for(auto it : result){
    if(it.second == maxCount){
      ans[it.first] = it.second;
    }
  }
  return ans;
}