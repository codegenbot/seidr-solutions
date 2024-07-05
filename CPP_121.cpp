#include <iostream>
#include <vector>
using namespace std;

int solutions(const vector<int>& lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i += 2) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    vector<int> lst;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        lst.push_back(num);
    }
    cout << solutions(lst) << endl;
    return 0;
}