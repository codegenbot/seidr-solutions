Here is the solution:

#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& arr, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++) {
        int num = arr[i];
        if (mp.find(target - num) != mp.end()) {
            return make_pair(num, target - num);
        }
        mp[num] = i;
    }
    return make_pair(-1, -1); // or throw an exception
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    pair<int, int> p = findPair(arr, target);
    cout << p.first << " " << p.second << endl;
    return 0;
}