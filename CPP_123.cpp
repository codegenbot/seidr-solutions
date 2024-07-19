#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> get_odd_collatz(int n);

int main(){
    assert(issame(get_odd_collatz(1), {1}));
    
    return 0;
}