#include <vector>
using namespace std;

pair<int,int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> map;
    for(int i=0; i<vec.size(); i++) {
        int n = vec[i];
        int complement = target - n;
        if(map.find(complement) != map.end()) {
            return make_pair(complement, n);
        }
        map[n] = i;
    }
    return make_pair(-1,-1); // or any default value
}

int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }
    int target;
    cin >> target;
    
    pair<int,int> result = findPair(vec, target);
    cout << result.first << " " << result.second << endl;

    return 0;
}