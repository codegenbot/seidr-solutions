#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    size_t pos = 0;
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
    for(int i=0; i<n; ++i){
        cin.ignore();
        getline(cin, s);
        vector<int> result = findIndices(s, s);
        cout << "Output: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}