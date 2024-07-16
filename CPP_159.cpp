#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    int number = a[0];
    int need = a[1];
    int remaining = b[0];

    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return eaten == b[0] && left == b[1];
}