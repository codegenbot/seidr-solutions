#include <vector>
using namespace std;

vector<int> findPair(vector<int>& numbers, int target) {
    unordered_map<int,int> map;
    vector<int> result;
    
    for(int i=0; i<numbers.size(); i++) {
        int n = numbers[i];
        int complement = target - n;
        if(map.find(complement) != map.end()) {
            result.push_back(n);
            result.push_back(complement);
            break;
        }
        map[n] = i;
    }
    
    return result;
}

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> numbers(n);
        for(int i=0; i<n; i++) {
            cin >> numbers[i];
        }
        int target;
        cin >> target;
        
        vector<int> result = findPair(numbers, target);
        cout << result[0] << " " << result[1] << endl;
    }
    
    return 0;
}