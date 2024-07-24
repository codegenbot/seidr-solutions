#include <initializer_list>

#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);
vector<string> filter_by_prefix(vector<string> strings, string prefix);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string string