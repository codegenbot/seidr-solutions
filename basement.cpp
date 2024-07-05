```
#include <iostream>
#include <vector>
using namespace std;
int basement(vector<int>& v) {
    int i = 0;
    int sum = 0;
    for (size_t i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum >= 0) {
            return -1;
        }
    }
    return i + 1;
}
int main() {
    vector<int> vec{ 1,2,-3,4,5 };
    cout << basement(vec);
}