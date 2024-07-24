#include <vector>
#include <string>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b);

vector<string> filter_by_prefix(vector<string> strings, string prefix);

bool issame(const vector<string>& a, const vector<string>& b) {
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