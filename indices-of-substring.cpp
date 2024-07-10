#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0, end = 0;
    
    while (end < text.size()) {
        if (text.substr(start, target.length()).compare(target) == 0) {
            result.push_back(start);
            start += target.length();
        } else if (start >= end + target.length()) {
            end++;
        } else {
            start++;
        }
    }
    
    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}