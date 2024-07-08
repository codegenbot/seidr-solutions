```
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> other) {
    if (a.size() != other.size()) 
        return false;
        
    for (int i = 0; i < a.size(); i++) 
        if (a[i] != other[i]) 
            return false;

    return true;
}