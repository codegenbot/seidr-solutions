#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> words_string) {
    bool same = true;
    if(a.size() != words_string.size()) same = false;
    else for(int i = 0; i < a.size(); i++) if(a[i] != words_string[i]) same = false;
    return same;
}