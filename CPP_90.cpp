Here is the solution:

if (lst.size() < 2) return -1; // None in Python
vector<int> sorted = lst;
sort(sorted.begin(), sorted.end());
int result = *next(iterate(sorted.begin(), sorted.end()));
return result;