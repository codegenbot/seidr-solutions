#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int prevPos = -1;
    
    while((prevPos = text.find(target, prevPos+1)) != string::npos) {
        result.push_back(prevPos);
        prevPos++;
    }
    
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}