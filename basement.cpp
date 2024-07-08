#include <vector>
#include <iostream>
using namespace std;
int main() {
    vector<int> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
        if (sum < 0) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}