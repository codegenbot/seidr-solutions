#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        throw runtime_error("Vector sizes do not match");
    }
    for (int i = 0; i < a.size(); ++i) {
        if (find(b.begin(), b.end(), a[i]) == b.end()) {
            throw runtime_error("Vectors are not the same");
        }
    }
    return true;
}

bool issame(vector<string> a, vector<string> b) {
    bool result = true;

    for (int i = 0; i < a.size() && result; ++i) {
        if (find(b.begin(), b.end(), a[i]) == b.end()) {
            result = false;
        }
    }

    return result;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (string s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}