#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = 0;
    
    while (index <= text.length() - target.length()) {
        int start = text.find(target, index);
        
        if (start != string::npos) {
            result.push_back(start);
            index = start + 1;
        } else {
            break;
        }
    }
    
    return result;
}

int main() {
    // Your code here
    return 0;
}