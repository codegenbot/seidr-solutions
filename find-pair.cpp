#include <vector>
using namespace std;

vector<int> findPair(vector<int>& vec, int target) {
    vector<int> result;
    map<int, bool> numMap;

    for (int num : vec) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            result.push_back(num);
            result.push_back(complement);
            return result;
        }
        numMap[num] = true;
    }

    // If no pair found, return empty vector
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int target;
    cin >> target;

    vector<int> result = findPair(vec, target);

    cout << result[0] << " ";
    cout << result[1];

    return 0;
}