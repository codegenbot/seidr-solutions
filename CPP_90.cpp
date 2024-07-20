Here is the solution:

vector<int>::iterator it;

if(lst.empty()) return NULL; 

next(it = min_element(lst.begin() + 1, lst.end()));
if(it == lst.begin())
    return NULL;
return *it;