#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    while (index <= text.size() - target.size()) {
        if (text.substr(index, target.size()).compare(target) == 0) {
            indices.push_back(index);
            index += target.size();
        } else {
            index++;
        }
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> result = findIndices(text, n + "");
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}