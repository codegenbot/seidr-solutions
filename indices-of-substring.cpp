#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for(int i = 0; i <= n - m; i++) {
        if(text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text;
    int num;
    cin >> text >> num;
    vector<int> result = indicesOfSubstring(text, num);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}