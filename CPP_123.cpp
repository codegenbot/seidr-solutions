#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) 
        return false;
    
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != b[i]) 
            return false;
    
    return true;
}

int main() {
    assert(equal(get_odd_collatz(1).begin(), get_odd_collatz(1).end(), vector<int>({1}).begin()));
    return 0;
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) {
            result.push_back(n);
        }
    }
    sort(result.begin(), result.end());
    return result;
}