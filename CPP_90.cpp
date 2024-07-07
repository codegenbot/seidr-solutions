vector<int>::iterator it = unique(lst.begin(), lst.end());
if(it == lst.begin() || lst.size() <= 1) return -1;
return *(it-1);