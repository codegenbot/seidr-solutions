#include <iostream>
#include <vector>

using namespace std;

int can_arrange(vector<int> arr) {
    for (int i = arr.size() - 1; i > 0; --i) {
        if (arr[i] < arr[i - 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr;
    int n, element;
    
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> element;
        arr.push_back(element);
    }

    cout << can_arrange(arr) << endl;
    return 0;
}