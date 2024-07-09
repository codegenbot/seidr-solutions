#include <vector>
#include <algorithm>
#include <cassert>
#include <climits>

using namespace std;

bool issame(vector<int>, vector<int>);

vector<int> rolling_max(vector<int>);

int main(){
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    
    return 0;
}