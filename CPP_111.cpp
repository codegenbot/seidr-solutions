#include <map>
#include <string>

bool issame(map<char,int> a,map<char,int> b){
    return a == b;
}

int main() {
    assert(issame({{'a', 1}}, histogram("a")));
    return 0;
}