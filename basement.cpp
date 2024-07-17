#include <vector>
using namespace std;

int findFirstNegativeIndex(const vector<int>& vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
        if (sum < 0) return i;
    }
    return -1; // If no negative index found
}

int main() {
    vector<int> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    cout << findFirstNegativeIndex(vec) << endl;
    return 0;
}