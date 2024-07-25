#include <vector>
#include <algorithm>
#include <cassert>

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 1) {
            result.push_back(n);
        }
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    sort(result.begin(), result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    // Test cases
    vector<int> test1 = get_odd_collatz(10);
    vector<int> expected1 = {1, 3, 5, 9, 10};
    assert(issame(test1, expected1));

    vector<int> test2 = get_odd_collatz(20);
    vector<int> expected2 = {1, 3, 5, 9, 21};
    assert(issame(test2, expected2));

    return 0;
}