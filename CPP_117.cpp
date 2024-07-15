#include <vector>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<string> result = select_words("hello world, welcome to coding", 3);
    vector<string> expected = {"hello", "world,", "welcome"};
    
    assert(issame(result, expected));

    return 0;
}