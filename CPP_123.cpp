```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function prototype
std::vector<int> get_odd_collatz(int);
bool issame(vector<int>, vector<int>);

int main() {
    assert(issame(get_odd_collatz(12), {1, 5, 17, 53, 161, 485, 1457, 4373, 13121}));
    
    return 0;
}

// Function definition
std::vector<int> get_odd_collatz(int n) {
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

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) 
        return false;  
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != b[i]) 
            return false;  
    return true;
}