#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos += target.size();
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> res = findIndices(s, s.substr(0, n));
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}