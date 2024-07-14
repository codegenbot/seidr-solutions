#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    size_t pos = 0; 
    while (pos != string::npos) {
        pos = text.find(target, pos); 
        if (pos != string::npos) {
            result.push_back(pos);
            pos += 1; 
        } else break;
    }
    return result;
}

int main() {
    string text = "your_text_here";
    string target = "your_target_here";
    vector<int> result = indicesOfSubstring(text, target);
    return 0;
}