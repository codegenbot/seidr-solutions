#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    
    while (index <= text.length() - target.length()) {
        if (text.substr(index, target.length()).compare(target) == 0) {
            indices.push_back(index);
            index += target.length();
        } else {
            index++;
        }
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