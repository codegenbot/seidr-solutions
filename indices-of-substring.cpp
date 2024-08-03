#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int index = 0;
    while (index < text.size()) {
        index = text.find(target, index);
        if (index == string::npos) break;
        result.push_back(index);
        index += target.size();
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> indices = findIndices(text, text.substr(0, n));
    for (int i : indices) cout << i << " ";
    cout << endl;
    return 0;
}