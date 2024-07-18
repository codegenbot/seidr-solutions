#include <vector>
bool issame(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    
    if (n != m)
        return false;
    
    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}