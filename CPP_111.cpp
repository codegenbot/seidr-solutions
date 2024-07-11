map<char,int> hist;
  int maxCount = 0;
  for (char c : test) {
      if (c == ' ') continue;
      hist[c]++;
      if (hist[c] > maxCount) {
          maxCount = hist[c];
      }
  }
  
  map<char,int> result;
  for (auto it : hist) {
      if (it.second == maxCount) {
          result[it.first] = it.second;
      }
  }
  
  return result;