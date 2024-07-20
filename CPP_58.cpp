set<int> s1(l1.begin(),l1.end());
set<int> s2(l2.begin(),l2.end());
vector<int> result;
set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),
                  inplace_merge(result.begin(),result.end()));
return vector<int>(result.begin(),result.end());