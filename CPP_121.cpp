#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> lst;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        lst.push_back(x);
    }
    cout << (accumulate(lst.begin(), lst.end(), 0, 
                          [](int sum, int val) { return val % 2 != 0 && val > 1 ? sum + val : sum; }) ) << endl;
    return 0;
}