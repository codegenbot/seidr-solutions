```cpp
#include <vector>
#include <cassert>
#include <initializer_list>
#include <limits>

bool monotonic(vector<float> l) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < l.size(); i++) {
        if (l[i] > l[i - 1]) {
            decreasing = false;
        } else if (l[i] < l[i - 1]) {
            increasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    assert(monotonic({9, 9, 9, 9}) == true);
    vector<float> input;
    cout << "Enter the numbers (space separated): ";
    for (float x; cin >> x;) {
        input.push_back(x);
    }
    if (monotonic(input)) {
        cout << "The sequence is monotonic." << endl;
    } else {
        cout << "The sequence is not monotonic." << endl;
    }
}