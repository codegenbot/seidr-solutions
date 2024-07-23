#include <vector>
#include <iostream>

bool issame(std::vector<int> a,std::vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    assert(issame({0,0,0,1}, compare({1,2,3,5},{-1,2,3,4})));
    // You can print the results here
}