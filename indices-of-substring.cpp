#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int textLength = text.length();
    int targetLength = target.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        int j = text.find(target, i);
        if (j != std::string::npos && j == i) { 
            result.push_back(i);
        }
    }

    return result;
}