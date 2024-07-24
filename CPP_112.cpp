#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a,vector<string>b){
    return a == b;
}

int main() {
    assert (issame({}, {"", "True"}));
    return 0;
}