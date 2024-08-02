#include <vector>
using namespace std;

vector<int> findPair(vector<int>& numbers, int target) {
    unordered_map<int, int> numMap;
    vector<int> result;

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
    int n, x1, x2, target;
    cin >> n;

    while (n--) {
        cin >> x1 >> x2;
        target = x2;
        vector<int> pair = findPair({x1, x2}, target);
        cout << pair[0] << " " << pair[1] << endl;
    }

    return 0;
}