#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    return (a==b);
}

int testMain() {
    vector<string> v1 = splitString("ahmed     , gamal");
    sort(v1.begin(), v1.end()); 
    assert(issame(v1, {"ahmed", "gamal"}));
    return 0;
}

vector<string> words_string(string s) {
    vector<string> tokens;
    size_t start = 0, end;
    do {
        end = s.find(" ", start);
        if (end == string::npos) {
            tokens.push_back(s.substr(start));
            break;
        }
        tokens.push_back(s.substr(start, end - start));
        start = end + 1;
    } while (1);
    return tokens;
}