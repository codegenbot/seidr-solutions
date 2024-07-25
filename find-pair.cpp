#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> numMap;
    
    for(int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        
        if(numMap.find(complement) != numMap.end()) {
            return make_pair(complement, vec[i]);
        }
        
        numMap[vec[i]] = i;
    }
    
    return {0, 0};
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num1, num2;
        cin >> num1 >> num2;
        
        pair<int, int> pair = findPair({num1, num2}, num1 + num2);
        
        if(pair.first == 0 && pair.second == 0) {
            cout << "No solution" << endl;
        } else {
            cout << pair.first << " " << pair.second << endl;
        }
    }

    return 0;
}