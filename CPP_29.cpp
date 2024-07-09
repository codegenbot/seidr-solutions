#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> combinedFunction(vector<string> strings, string prefix){
    return filter_by_prefix(strings, prefix);
}

int main() {
    bool result = issame(combinedFunction({"xxx", "asd", "xxy", "john doe", "xxxAAC", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"});
    cout << (result ? "PASS" : "FAIL") << endl;
    return 0;
}