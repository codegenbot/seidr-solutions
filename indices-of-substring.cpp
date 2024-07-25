#include <vector>
using namespace std;

vector<int> findIndices(const string& text, const string& target) {
    vector<int> indices;
    int start = 0;
    while ((start = text.find(target, start)) != string::npos) {
        indices.push_back(start);
        start += target.size();
    }
    return indices;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string str;
        cin >> str;
        int pos = 0;
        cin >> pos;
        vector<int> res = findIndices(str, to_string(pos));
        cout << "output: ";
        for (auto x : res) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}