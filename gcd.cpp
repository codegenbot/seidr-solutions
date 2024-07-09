#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0;
    
    while (start < text.length()) {
        size_t pos = text.find(target, start);
        
        if (pos != string::npos) {
            result.push_back(pos);
            start = pos + 1;
        } else {
            break;
        }
    }
    
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}