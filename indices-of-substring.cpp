#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0, end = 0;
    while ((end = text.find(target, start)) != string::npos) {
        indices.push_back(end);
        start = end + 1;
    }
    return indices;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;
    
    vector<int> result = findIndices(text, target);

    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}