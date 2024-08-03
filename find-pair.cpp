#include <vector>
using namespace std;

vector<int> findPair(vector<int>& arr, int target) {
    vector<int> result;
    unordered_set<int> seen;

    for (int num : arr) {
        int complement = target - num;
        if (seen.count(complement)) {
            result.push_back(num);
            result.push_back(complement);
            return result;
        }
        seen.insert(num);
    }

    result.push_back(-1); // no such pair
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto& num : arr) {
        cin >> num;
    }

    int target;
    cin >> target;

    vector<int> result = findPair(arr, target);

    if (result[0] == -1) {
        cout << "No such pair" << endl;
    } else {
        for (int num : result) {
            cout << num << endl;
        }
    }

    return 0;
}