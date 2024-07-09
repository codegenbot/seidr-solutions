#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

}

int main() {
    vector<string> strings = {"xxx", "asd", "xxy", "john doe", "xxxAAC", "xxx"};
    vector<string> expected_result = {"xxx", "xxxAAA", "xxx"};
    assert(issame(filter_by_prefix(strings, "xxx"), expected_result));
}