```cpp
#include <vector>
#include <algorithm>

using namespace std;

int compare(vector<int> a, vector<int> b) {
    vector<int> c = a;
    vector<int> d = b;
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    if (c.size() < d.size())
        return -1;
    else if (c.size() > d.size())
        return 1;
    else
        {
            for(int i=0;i<c.size();i++){
                if(c[i]<d[i])
                    return -1;
                else if(c[i]>d[i])
                    return 1;
            }
            return 0;
        }
}

int main() {
    vector<int> a = {1,2,3};
    vector<int> b = {1,2,4};
    
    int result = compare(a,b);
    
    assert(result == -1); // Test the function
    
    cout << "The output is: " << result << endl;
    
    return 0;
}