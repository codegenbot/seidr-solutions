#include <vector>
using namespace std;

vector<int> findPair(vector<int>& arr, int target) {
    vector<int> pair;
    map<int, int> numMap;

    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (numMap.find(complement) != numMap.end()) {
            pair.push_back(arr[i]);
            pair.push_back(complement);
            break;
        }
        numMap[arr[i]] = i;
    }

    return pair;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    vector<int> result = findPair(arr, target);
    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }
}