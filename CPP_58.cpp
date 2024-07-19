```cpp
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b)
{
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    return true;
}

int main()
{
    vector<int> common({4, 3, 2, 8}, {}); 
    assert(issame(common({4, 3, 2, 8}, {}), {}));
}