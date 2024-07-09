#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int i = 0;
    
    while (i <= text.length() - target.length()) {
        if (text.substr(i, target.length()).compare(target) == 0) {
            indices.push_back(i);
            i += target.length();
        } else {
            i++;
        }
    }
    
    return indices;
}

int main() {
    int n;
    cin >> n;
    string text;
    getline(cin, text);

    vector<int> result = findIndices(text, text.substr(0, 1));
    for (int i : result) {
        cout << i << endl;
    }
    
    return 0;
}