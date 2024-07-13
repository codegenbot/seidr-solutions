#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> map;
    
    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        
        if (map.find(complement) != map.end()) {
            return {complement, vec[i]};
        }
        
        map[vec[i]] = i;
    }
    
    return {-1, -1}; // or throw an exception
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (auto &num : vec) {
        cin >> num;
    }

    int target;
    cin >> target;

    pair<int, int> result = findPair(vec, target);

    cout << result.first << " ";
    cout << result.second << endl;

    return 0;
}