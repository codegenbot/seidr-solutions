#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    int total = a[0] + a[1];
    int eaten = total <= b[1] ? total : b[1];
    int left = b[1] - eaten;

    return eaten == b[0] && left == b[1];
}