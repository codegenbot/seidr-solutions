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
    int n, temp;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        arr.push_back(temp);
    }
    
    cout << can_arrange(arr) << endl;
    return 0;
}