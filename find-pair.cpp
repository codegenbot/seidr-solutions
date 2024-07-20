#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& numbers, int target) {
    unordered_map<int, int> numMap;
    for (int num : numbers) {
        int complement = target - num;
        if (numMap.find(complement) != numMap.end()) {
            return make_pair(num, complement);
        }
        numMap[num] = 1;
    }
    return make_pair(-1, -1); // or throw an exception if you prefer
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (auto &num : numbers) {
        cin >> num;
    }
    int target;
    cin >> target;
    
    pair<int, int> result = findPair(numbers, target);
    if (result.first != -1) {
        cout << result.first << endl;
        cout << result.second << endl;
    } else {
        cout << "No such pair" << endl;
    }
    
    return 0;
}