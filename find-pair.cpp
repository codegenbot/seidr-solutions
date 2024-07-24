#include <vector>
using namespace std;

pair<int, int> findPair(const vector<int>& vec, int target) {
    unordered_map<int, int> map;
    
    for (int num : vec) {
        int complement = target - num;
        
        if (map.count(complement)) {
            return make_pair(complement, num);
        }
        
        map[num] = 1;
    }
    
    throw runtime_error("No pair found");
}

int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int target;
    cin >> target;
    
    try {
        pair<int, int> result = findPair(vec, target);
        
        cout << result.first << endl;
        cout << result.second << endl;
    } catch (exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    
    return 0;
}