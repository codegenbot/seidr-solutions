#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    // example usage
    vector<string> input = {"hello", "world", "hello world", "abc"};
    string sub = "hello";
    vector<string> output = filter_by_substring(input, sub);
    if (issame(input, output)) {
        cout << "The result is the same as the input." << endl;
    } else {
        cout << "The result is different from the input." << endl;
    }
    return 0;
}