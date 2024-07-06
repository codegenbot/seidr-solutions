set<int> s1(l1.begin(), l1.end());
set<int> s2(l2.begin(), l2.end());

set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                 inplace_merge(s1.begin(), s1.end(), s1.end()));
vector<int> res(s1.begin(), s1.end());
return res;