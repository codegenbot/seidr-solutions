#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int n = text.size();
    int m = target.size();

    for(int i = 0; i <= n - m; ++i) {
        if(text.substr(i, m) == target) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    string text;
    cout << "Enter the text: ";
    cin >> text;

    string target;
    cout << "Enter the target: ";
    cin >> target;

    vector<int> result = findIndices(text, target);

    for(int i : result) {
        cout << i << endl;
    }

    return 0;
}