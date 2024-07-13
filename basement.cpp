#include <vector>
using namespace std;

int findFirstNegativeIndex(const vector<int>& vec) {
    for (int i = 0; i <= vec.size() - 1; i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += vec[j];
        }
        if (sum < 0) return i;
    }
    return -1; // return -1 if no negative sum is found
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