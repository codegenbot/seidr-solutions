set<int> s1(l1.begin(),l1.end());
set<int> s2(l2.begin(),l2.end());
set<int> result;
set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),
                  inserter(result,result.begin()));
vector<int> v(result.begin(),result.end());
sort(v.begin(),v.end());
return v;