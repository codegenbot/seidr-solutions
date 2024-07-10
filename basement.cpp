#include <vector>
#include <iostream>

using namespace std;

int findFirstNegativeIndex(const vector<int>& vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    cout << findFirstNegativeIndex(vec) << endl;
    return 0;
}