#include <vector>
#include <string>  
using namespace std;

int main() {
    string text = "ABCDEF";
    string target = "CDE";
    vector<size_t> result = indicesOfSubstring(text, target);
    for (size_t i : result) {
        cout << i << endl;
    }
}

vector<size_t> indicesOfSubstring(string text, string target) {
    vector<size_t> result;
    for (size_t i = 0; i <= text.size() - target.size(); ++i) {
        bool found = true;
        for (size_t j = 0; j < target.size(); ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
        }
    }
    return result;
}