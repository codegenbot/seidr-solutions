#include <vector>
using namespace std;

vector<int> findPair(vector<int>& numbers, int target) {
    vector<int> result;
    unordered_map<int, int> numMap;

    for (int i = 0; i < numbers.size(); i++) {
        int complement = target - numbers[i];
        if (numMap.find(complement) != numMap.end()) {
            result.push_back(numbers[i]);
            result.push_back(complement);
            break;
        }
        numMap[numbers[i]] = i;
    }

    return result;
}

int main() {
    int n, x, y;
    cin >> n;

    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int target;
    cin >> target;

    vector<int> result = findPair(numbers, target);

    cout << result[0] << endl;
    cout << result[1] << endl;

    return 0;
}