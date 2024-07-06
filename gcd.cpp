```cpp
#include <vector>
#include <string>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int n = text.length();
    int m = target.length();
    
    for(int i=0; i<=(n-m); ++i){
        if(text.substr(i,m) == target)
            indices.push_back(i);
    }
    
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}