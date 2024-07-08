#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

bool operator==(const vector<string>& v1, const vector<string>& v2)
{
    if(v1.size() != v2.size())
        return false;

    for(int i = 0; i < v1.size(); i++)
        if(v1[i] != v2[i])
            return false;

    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
};

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), vector<string>{string("xxx"), string("xxxAAA"), string("xxx")}));
    return 0;
}