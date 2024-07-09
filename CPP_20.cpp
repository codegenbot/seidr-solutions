```cpp
#include <vector>
bool issame(std::vector<float> a, std::vector<float> b) { return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin()); }