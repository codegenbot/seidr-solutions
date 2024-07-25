#include <vector>
using namespace std;

vector<int> findPair(vector<int>& numbers, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < numbers.size(); i++) {
        int complement = target - numbers[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, numbers[i]};
        }
        numMap[numbers[i]] = i;
    }
    return {};
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (auto& num : numbers) {
        cin >> num;
    }
    int target;
    cin >> target;
    vector<int> result = findPair(numbers, target);
    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}