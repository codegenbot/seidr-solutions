#include <vector>
using namespace std;

vector<int> findIndices(const string& text, const string& target) {
    vector<int> result;
    size_t pos = 0;
    while (pos != string::npos) {
        pos = text.find(target, pos);
        if (pos != string::npos) {
            result.push_back(pos);
            pos += 1; // To avoid matching the same substring again
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    for(int i=0; i<n; ++i){
        string line;
        getline(cin, line);
        if(i == 0) {
            text = line;
        } else {
            findIndices(text, line).size() ? cout << "1" : cout << "0";
            cout << endl;
        }
    }
    return 0;
}