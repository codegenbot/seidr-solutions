#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    int total = a[0] + a[1];
    int remaining = b[0];
    int eaten = std::min(total, remaining);
    return {eaten, std::max(0, total - remaining)};
}