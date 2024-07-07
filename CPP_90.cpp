Here is the solution:

if (lst.size() < 2) return -1;

vector<int>::iterator it = lst.begin();
advance(it, 1);

return *prev(it);