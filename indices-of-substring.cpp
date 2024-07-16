#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += 1; 
    }
    return result;
}

int main() {
    string text;
    int n;
    cin >> text >> n;

    vector<int> indices = indicesOfSubstring(text, to_string(n));
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}