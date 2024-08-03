#include <vector>
using namespace std;

pair<int, int> findPair(const vector<int>& numbers, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < numbers.size(); i++) {
        int complement = target - numbers[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, numbers[i]};
        }
        numMap[numbers[i]] = i;
    }
    return {{0, 0}}; // default values
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (auto& x : numbers) {
        cin >> x;
    }
    int target;
    cin >> target;
    
    pair<int, int> result = findPair(numbers, target);
    cout << result.first << " " << result.second << endl;

    return 0;
}