#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != b[i]) 
            return false;
    return true;
}

vector<int> sort_array(vector<int> arr){
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (count(bite(a)) == count(bite(b)))
            return a < b;
        else
            return count(bite(a)) < count(bite(b));
    });
    return arr;
}

int count(int n) {
    int ones = 0;
    while(n > 0) {
        if((n & 1) == 1)
            ones++;
        n >>= 1;
    }
    return ones;
}
int bite(int n) {
    return n;
}

int main() {
    assert(issame(sort_array({2,4,8,16,32}) , {2, 4, 8, 16, 32}));
    // Your test cases here
    return 0;
}