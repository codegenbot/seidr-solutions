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
    cin.ignore();
    getline(cin, s);
    string t;
    cin.ignore();
    getline(cin, t);

    vector<int> res = findIndices(s, t);

    for(int i=0; i<res.size();i++) {
        cout << res[i] << endl;
    }

    return 0;
}