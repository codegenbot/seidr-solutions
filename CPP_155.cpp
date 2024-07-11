#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

vector<int> even_odd_count(int num) {
    vector<int> counts = {0, 0};
    string numStr = to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

bool is_same(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    int n;
    cin >> n;
    vector<int> result = even_odd_count(n);
    cout << result[0] << " " << result[1] << endl;
    
    assert(is_same(even_odd_count(0), {1, 0}));
    
    return 0;
}