#include <algorithm>
std::sort(l.begin(), l.end());
l.erase(std::unique(l.begin(), l.end()), l.end());
assert(std::equal(l.begin(), l.end(), expected.begin()));