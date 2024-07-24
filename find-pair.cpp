#include <vector>
using namespace std;

vector<int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> map;
    vector<int> result;
    
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        if (map.find(complement) != map.end()) {
            result.push_back(vec[i]);
            result.push_back(complement);
            break;
        }
        map[vec[i]] = i;
    }
    
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
    vector<int> res = findPair(vec, target);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}