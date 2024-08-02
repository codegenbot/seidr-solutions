#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> numMap;
    pair<int, int> result = make_pair(-1, -1);

    for (int i = 0; i < vec.size(); i++) {
        int complement = target - vec[i];
        if (numMap.find(complement) != numMap.end()) {
            result.first = vec[i];
            result.second = complement;
            break;
        }
        numMap[vec[i]] = i;
    }

    return result;
}

int main() {
    int n, a, b;
    cin >> n;
    vector<int> vec;
    
    for(int i=0; i<n; ++i) {
        cin >> a;
        vec.push_back(a);
    }
    
    int target;
    cin >> target;

    pair<int, int> result = findPair(vec, target);

    if(result.first != -1 && result.second != -1)
        cout << result.first << '\n' << result.second << '\n';
    else
        cout << "No two elements sum to the target.\n";

    return 0;
}