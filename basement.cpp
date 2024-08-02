#include <vector>
using namespace std;

int basementIndex(vector<int> &v) {
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    // Read input from user
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    cout << basementIndex(v);

    return 0;
}