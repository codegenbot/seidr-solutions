#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto str : strings) {
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

int main() {
    assert(issame(filter_by_prefix({string("xxx"), string("asd"), string("xxy"), string("john doe"), string("xxxxAAA"), string("xxx")}, string("xxx")), {string("xxx"), string("xxxAAA"), string("xxx")}));
    return 0;
}