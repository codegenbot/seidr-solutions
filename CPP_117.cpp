#include <vector>

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

int main() {
    string s = "hello world my name is alice";
    int n = 2;
    vector<string> actual_result = select_words(s, n);
    vector<string> expected_result = {"hello", "world", "alice"};
    
    assert(issame(actual_result, expected_result));

    return 0;
} 