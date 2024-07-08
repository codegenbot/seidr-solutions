#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    bool same = true;
    if(a.size() != b.size()) same = false;
    else for(int i = 0; i < a.size(); i++) if(a[i] != b[i]) same = false;
    return same;
}