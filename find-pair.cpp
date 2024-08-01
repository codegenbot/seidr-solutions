Here is the solution:

#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    vector<int> numSet(vec.begin(), vec.end());
    sort(numSet.begin(), numSet.end());
    int left = 0;
    int right = numSet.size() - 1;
    
    while (left < right) {
        int sum = numSet[left] + numSet[right];
        if (sum == target) {
            return make_pair(numSet[left], numSet[right]);
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    
    pair<int, int> result;
    result.first = 0;  // default value
    result.second = 0; // default value
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    int target;
    cin >> target;
    
    pair<int, int> result = findPair(vec, target);
    if (!result.first && !result.second) {
        cout << "No solution exists" << endl;
    } else {
        cout << result.first << "\n";
        cout << result.second << "\n";
    }
    
    return 0;
}