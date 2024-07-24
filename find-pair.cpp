#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& numbers, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < numbers.size(); i++) {
        int complement = target - numbers[i];
        if (map.find(complement) != map.end()) {
            return make_pair(complement, numbers[i]);
        }
        map[numbers[i]] = i;
    }
    return make_pair(-1, -1);
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