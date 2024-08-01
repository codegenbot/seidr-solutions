```cpp
set<int> s1(l1.begin(), l1.end());
set<int> s2(l2.begin(), l2.end());

set<int> common;
std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
    std::inserter(common, common.end()));

vector<int> result(common.begin(), common.end());
sort(result.begin(), result.end());
return result;