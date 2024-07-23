bool below_threshold(vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

#include <iostream>
#include <vector>

int main() {
    vector<int> l = {1, 2, 3};
    int t = 3;
    cout << boolalpha << below_threshold(l, t) << endl;
    return 0;
}