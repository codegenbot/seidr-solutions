#include <vector>
#include <string>
#include <cassert> // Include necessary header

bool issame(const vector<string>& a, const vector<string>& b){ // Fix function signature
    int totalChars1 = 0, totalChars2 = 0;
    for (const string& str : a) {
        totalChars1 += str.size();
    }
    for (const string& str : b) {
        totalChars2 += str.size();
    }
    
    // Correct comparison and return statement
    return totalChars1 == totalChars2;
}

int main(){
    assert(issame({"this"}, {})); // Use correct function call syntax
    return 0;
}