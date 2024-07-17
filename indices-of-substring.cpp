#include <cctype>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    int i = 0; 
    while (i <= n - m + 1) { 
        if ((text.substr(i, m)).compare(0, m, target) == 0 ||
            (text.substr(i, m)).compare(0, m, std::tolower(target)) == 0 ||
            (text.substr(i, m)).compare(0, m, std::toupper(target)) == 0) { 
        result.push_back(i); 
    }
    i++; 
}

int main() {
    string text;
    getline(cin, text);
    string target;
    getline(cin, target);

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}