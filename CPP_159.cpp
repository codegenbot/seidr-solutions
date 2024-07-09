```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return (a == b);
}

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = min(total - 1000, remaining);
    if (left < 0) {
        return {total, 0};
    } else {
        return {total, max(remaining - left, 0)};
    }
}

int main() {
    assert(eat(4,5,1)==make_pair(9,0));
}