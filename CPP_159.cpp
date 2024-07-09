#include <algorithm>
#include <vector>
#include <cassert>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = min(total, remaining);
    int left = max(0, total - remaining);
    return {eaten, left};
}

void myAssert(bool expr) {
    if (!expr) {
        cout << "Assertion failed." << endl;
        exit(1);
    }
}

int main() {
    myAssert(eat(4, 5, 1) == vector<int>{5, 0});
    
    return 0;
}