#include <vector>

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<string> v1, vector<string> v2) {
    return v1 == v2;
}

int main() {
    // Test code here
    return 0;
}