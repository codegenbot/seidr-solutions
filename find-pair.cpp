#include <vector>
using namespace std;

vector<int> findPair(vector<int>& numbers, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < numbers.size(); i++) {
        int complement = target - numbers[i];
        if (numMap.count(complement)) {
            return vector<int>{complement, numbers[i]};
        }
        numMap[numbers[i]] = i;
    }
    return {};
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
    vector<int> result = findPair(numbers, target);
    cout << result[0] << endl << result[1] << endl;
    return 0;
}