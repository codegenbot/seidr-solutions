#include <iostream>
#include <vector>
using namespace std;

bool monotonic(const vector<int>& l) {
    if (l.empty()) return true;
    bool increasing = true, decreasing = true;
    for (size_t i = 1; i < l.size(); ++i) {
        if (l[i] > l[i - 1]) decreasing = false;
        if (l[i] < l[i - 1]) increasing = false;
    }
    return increasing || decreasing;
}

int main() {
    vector<int> l;
    int n, element;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> element;
        l.push_back(element);
    }

    if (monotonic(l)) {
        cout << "The sequence is monotonic." << endl;
    } else {
        cout << "The sequence is not monotonic." << endl;
    }

    return 0;
}