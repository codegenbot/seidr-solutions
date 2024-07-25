vector<int>::iterator it;

if(lst.size() < 2) return NULL; 

it = min_element(lst.begin(), lst.end());

it++;

return *it;