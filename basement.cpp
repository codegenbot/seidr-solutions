#include <vector>
#include <iostream>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while(t--) {
        vector<int> vec;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        int sum = 0, index = 0;
        while(index < n && sum >= 0) {
            sum += vec[index];
            ++index;
        }
        if (sum < 0) --index;
        cout << "First negative sum index: " << index << endl;
    }
    return 0;
}