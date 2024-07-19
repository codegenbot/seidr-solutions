#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> pluck(vector<int> v){
    return v;
}

int main(){
    assert(pluck({7, 9, 7, 1}) == vector<int>{});
    return 0;
}