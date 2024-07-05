#include <iostream>
#include <vector>

using namespace std;

bool monotonic(vector<float> l) {
    bool increasing = true, decreasing = true;
    for (size_t i = 1; i < l.size(); ++i) {
        if (l[i] > l[i - 1]) decreasing = false;
        if (l[i] < l[i - 1]) increasing = false;
    }
    return increasing || decreasing;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<float> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    if (monotonic(nums)) {
        cout << "The sequence is monotonic." << endl;
    } else {
        cout << "The sequence is not monotonic." << endl;
    }
    return 0;
}