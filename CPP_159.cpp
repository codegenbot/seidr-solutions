#include <vector> // Include the vector header
int total = number + std::min(need, remaining);
int left = std::max(0, remaining - need);
return {total, left};