```cpp
#include <vector>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size())
        return false;
    for(int i=0;i<a.size();i++)
        if(a[i] != b[i])
            return false;
    return true;
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) { 
            result.push_back(n);
        }
    }
    return result; 
}

int main() {
    vector<int> test = get_odd_collatz(12); 
    assert(issame(test , vector<int>{1,5,13,41,133,401,1201,2449,7328}));
}