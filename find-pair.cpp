#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& numbers, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < numbers.size(); i++) {
        int complement = target - numbers[i];
        if (numMap.find(complement) != numMap.end()) {
            return make_pair(numbers[i], complement);
        }
        numMap[numbers[i]] = i;
    }
    return make_pair(-1, -1); // or throw an exception
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
    if (result.first != -1) {
        cout << result.first << endl;
        cout << result.second << endl;
    } else {
        cout << "No such pair found" << endl;
    }
    return 0;
}