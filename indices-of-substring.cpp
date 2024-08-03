#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int last = -1;  // last index where the target was found
    
    while ((last = text.find(target, last + 1)) != string::npos) {
        indices.push_back(last);
    }
    
    return indices;
}

int main() {
    int n;
    cin >> n;
    string s;
    getline(cin, s);

    vector<int> result = findIndices(s, s.substr(0, n));
    for (int i : result)
        cout << i << endl;

    return 0;
}