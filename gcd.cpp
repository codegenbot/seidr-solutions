#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int lastFoundIndex = -1; // keep track of the last found index
    
    for (int i = 0; i <= text.size() - target.size(); i++) { // iterate through the text
        if (text.substr(i, target.size()) == target) {
            // if we find a match, add it to our result and update the lastFoundIndex
            if (lastFoundIndex < 0)
                lastFoundIndex = i;
            result.push_back(i);
        }
    }
    
    return result;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}