```cpp
#include <vector>
#include <string>
#include <iostream>
#include <cstdint>

using namespace std;

std::vector<uint64_t> indicesOfSubstring(string text, string target) {
    vector<uint64_t> result;
    uint64_t pos = 0; // position in text

    while (true) { 
        pos = text.find(target, pos);
        
        if (pos == string::npos) {
            break;
        }

        result.push_back(pos);
        pos += target.size(); // move to the next occurrence
    }
    
    return result;
}

int main() {
    string text = "ABCDEF";
    string target = "CDE";
    vector<uint64_t> result = indicesOfSubstring(text, target);
    for (uint64_t i : result) {
        cout << i << endl;
    }
}