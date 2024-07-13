#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int last = -1;
    while (true) {
        size_t pos = text.find(target, last + 1);
        if (pos == string::npos)
            break;
        result.push_back(pos);
        last = pos;
    }
    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}