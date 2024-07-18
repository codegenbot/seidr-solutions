#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    vector<string> vec1 = {"apple", "banana", "orange"};
    vector<string> vec2 = {"apple", "banana", "orange"};

    bool result = issame(vec1, vec2);
    return 0;
}