#include <algorithm>
#include <vector>
#include <cassert>

bool issame(vector<int> a,vector<int> b){
    return a==b;
}

int main(){
    assert (issame({},{}) );
    assert (issame(order_by_points({0,6,6,-76,-21,23,4}) , {-76, -21, 0, 4, 23, 6, 6}));
}