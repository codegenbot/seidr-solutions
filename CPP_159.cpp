#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = min(total, remaining);
    int left = max(0, total - remaining);
    return {eaten, left};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    // Add more test cases if needed
    
    return 0;
}