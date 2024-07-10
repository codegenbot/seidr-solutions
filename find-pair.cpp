#include <vector>
using namespace std;

vector<int> findPair(vector<int>& vec, int target) {
    vector<int> result;
    unordered_map<int, int> map;
    
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        if (map.find(complement) != map.end()) {
            result.push_back(vec[i]);
            result.push_back(complement);
            return result;
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
    vector<int> result = findPair(vec, target);
    cout << result[0] << endl;
    cout << result[1] << endl;
    return 0;
}