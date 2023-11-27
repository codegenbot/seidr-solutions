#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    // function implementation
}

int main() {
    // main function implementation
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (string str : strings) {
        if (str.substr(0, prefix.size()) == prefix) {
            result.push_back(str);
        }
    }
    return result;
}