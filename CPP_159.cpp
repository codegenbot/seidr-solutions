#include <vector>
int total = number + std::min(need, remaining);
int left = std::max(0, remaining - need);
return std::make_pair(total, left);