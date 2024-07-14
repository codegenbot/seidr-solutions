#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int start = 0;
    
    while (true) {
        size_t found = text.find(target, start);
        
        if (found == string::npos) break;
        
        result.push_back(found);
        start = found + 1;
    }
    
    return result;
}

int gcd(int a, int b) {
    if (b == 0) 
        return a;
    else
        return gcd(b, a % b);
}