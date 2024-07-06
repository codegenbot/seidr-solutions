#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string text = "banana";
    string target = "na";
    
    vector<int> indices = indicesOfSubstring(text, target);
    
    for (size_t i = 0; i < indices.size(); ++i) {
        cout << indices[i] << endl;
    }
    
    return 0;
}