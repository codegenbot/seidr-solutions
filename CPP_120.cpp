#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> issame(const vector<int>& a, const vector<int>& b){
    sort(a.begin(), a.end(), greater<int>());
    vector<int> result(a.begin(), a.begin() + b.size());
    return result;
}

int main() {
    vector<int> a = {1, 2, 3, -23, 243, -400, 0};
    vector<int> b = {};

    vector<int> result = issame(a, b);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}