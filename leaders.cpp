#include <vector>
std::vector<int> leaders(const std::vector<int>& v) {
std::vector<int> result;
for (auto it = v.begin(); it != v.end(); ++it) {
bool isLeader = true;
for (auto jt = it + 1; jt != v.end() && *jt > *it; ++jt) {
if (*jt <= *it) {
isLeader = false;
break;
}
}
if (isLeader || it == v.begin()) result.push_back(*it);
}
return result;
}