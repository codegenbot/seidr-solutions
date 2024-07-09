#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int bf(string a, string b) {
    if(a.length() != b.length()) {
        return 0;
    }
    for(int i = 0; i < a.length(); i++) {
        if(tolower(a[i]) != tolower(b[i])) {
            return 0;
        }
    }
    return 1;
}