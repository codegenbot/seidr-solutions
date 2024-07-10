#include <vector>
using namespace std;

vector<int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> map;
    vector<int> result;
    
    for (int num : vec) {
        int complement = target - num;
        if (map.find(complement) != map.end()) {
            result.push_back(num);
            result.push_back(complement);
            return result;
        }
        map[num] = 1;
    }
    
    return result;
}

int main() {
    int n, x, y, sum;
    cin >> n;
    while (n--) {
        cin >> x >> y;
        sum = x + y;
        vector<int> result = findPair({x, y}, sum);
        cout << result[0] << " " << result[1] << endl;
    }
    return 0;
}