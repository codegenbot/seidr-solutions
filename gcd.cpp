#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    
    while (true) {
        size_t found = text.find(target, start);
        
        if (found == string::npos)
            break;
        
        indices.push_back(found);
        start = found + 1;
    }
    
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}