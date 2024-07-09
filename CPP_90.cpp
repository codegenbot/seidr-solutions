Here is the solution:

if (lst.size() < 2) return -1; // or return None
vector<int> sorted = lst;
sort(sorted.begin(), sorted.end());
int res = *next(iterate(sorted.begin()+1, sorted.end()));
return res;