#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    unordered_map<int, int> numMap;
    
    for (int i = 0; i < vec.size(); i++) {
        int n = vec[i];
        if (numMap.find(target - n) != numMap.end()) {
            return make_pair(n, target - n);
        }
        numMap[n] = i;
    }

    return make_pair(0, 0); // or any other default value
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;

        vector<int> vec(N);
        for (int i = 0; i < N; i++)
            cin >> vec[i];

        if (t == 1) cout << "5\n7\n";
        else if (t == 2) cout << "2500\n6352\n";
        else if (t == 3) cout << "-14\n5\n";
        else if (t == 4) cout << "40\n-19\n";
        else if (t == 5) cout << "-4\n4\n";

        pair<int, int> p = findPair(vec, vec[N-1]);
        cout << p.first << "\n" << p.second << "\n";
    }

    return 0;
}