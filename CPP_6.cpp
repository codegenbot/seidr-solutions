#include <vector>

bool issame(const vector<int>& depths1, const vector<int>& depths2) {
    if(depths1.size() != depths2.size()) {
        return false;
    }

    for(int i = 0; i < depths1.size(); i++) {
        if(depths1[i] != depths2[i]) {
            return false;
        }
    }

    return true;
}

vector<int> parse_nested_parens(string paren_string);

int main() {
    // Code provided by the user goes here
    return 0;
}