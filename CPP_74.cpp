#include <string>

bool issame(const vector<string>& a, const vector<string>& b){
    int total_chars1 = 0;
    for (const string& str : a) {
        total_chars1 += str.size();
    }

    int total_chars2 = 0;
    for (const string& str : b) {
        total_chars2 += str.size();
    }

    if (total_chars1 < total_chars2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    assert(issame(total_match(vector<string>{"this"}, vector<string>{}), vector<string>{}));
    return 0;
}