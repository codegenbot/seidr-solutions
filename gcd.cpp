#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    
    while(start <= text.size() - target.size()) {
        int index = text.find(target, start);
        
        if(index == -1)
            break;
        
        indices.push_back(index);
        start = index + 1;
    }
    
    return indices;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}