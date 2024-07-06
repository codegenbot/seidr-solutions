#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string>b); // Added the missing semicolon at the end of the function signature for `issame`.

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}) == true);
    return 0;
}