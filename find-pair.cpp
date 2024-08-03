#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < vec.size(); i++) {
        int num = vec[i];
        int complement = target - num;
        if (map.find(complement) != map.end()) {
            return make_pair(complement, num);
        }
        map[num] = i;
    }
    return make_pair(-1, -1); // or throw an exception
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
    if (result.first != -1) {
        cout << result.first << " ";
        cout << result.second << endl;
    } else {
        cout << "No two sum" << endl;
    }
    return 0;
}