#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += target.size();
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string s;
    getline(cin, s);
    vector<int> indices = findIndices(s, s.substr(0, n));
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}