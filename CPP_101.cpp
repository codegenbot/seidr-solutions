#include <vector>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) 
        return false;
    else for(int i = 0; i < a.size(); i++) 
        if(a[i] != b[i]) 
            return false;
    return true;
}