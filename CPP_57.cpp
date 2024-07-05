#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool monotonic(vector<float> l){
    bool increasing = true, decreasing = true;
    for (size_t i = 1; i < l.size(); ++i) {
        if (l[i] > l[i - 1]) decreasing = false;
        if (l[i] < l[i - 1]) increasing = false;
    }
    return increasing || decreasing;
}

int main() {
    assert(monotonic({9, 9, 9, 9}) == true);
    assert(monotonic({1, 2, 3, 4}) == true);
    assert(monotonic({4, 3, 2, 1}) == true);
    assert(monotonic({1, 3, 2, 4}) == false);

    cout << "All test cases passed!" << endl;
    return 0;
}