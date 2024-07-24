#include <vector>
using namespace std;

pair<int, int> findPair(const vector<int>& numbers, int target) {
    unordered_map<int, int> numMap;
    for (int num : numbers) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            return {complement, num};
        }
        numMap[num] = 1;
    }
    return {-1, -1}; // Return a default value or handle the error as needed
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    int target;
    cin >> target;
    pair<int, int> result = findPair(numbers, target);
    cout << result.first << " " << result.second << endl;
    return 0;
}