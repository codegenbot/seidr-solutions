#include <vector>
#include <string>
#include <initializer_list>

bool issame(vector<string> a,vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame({"this"}, {}));
    return 0;
}

vector<string> total_match(vector<string>, initializer_list<string>) {
    // Your code here
}