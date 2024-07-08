#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(const string& a, const string& b) {
    return a.find(b) == 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (issame(str, prefix)) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> filtered = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");
    for (const auto& str : filtered) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}