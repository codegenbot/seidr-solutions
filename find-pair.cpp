#include <vector>
using namespace std;

vector<int> findPair(vector<int>& numbers, int target) {
    unordered_map<int, int> numMap;
    vector<int> result;

    for (int num : numbers) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            result.push_back(num);
            result.push_back(complement);
            break;
        }
        numMap[num] = 1;
    }

    return result;
}

int main() {
    int n, x, y;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> x;
        numbers[i] = x;
    }
    int target;
    cin >> target;

    vector<int> result = findPair(numbers, target);

    if (!result.empty()) {
        cout << result[0] << endl;
        cout << result[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}