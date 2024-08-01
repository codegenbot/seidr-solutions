#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0, end = 0, index = -1;
    
    while ((index = text.find(target, start)) != string::npos) {
        result.push_back(index);
        start = index + 1;
    }
    
    return result;
}

int main() {
    // You can test your code here
    return 0;
}