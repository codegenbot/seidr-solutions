#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int pos = 0;
    
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += 1; // Add 1 to consider overlapping targets
    }
    
    return result;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    getline(cin, target);
    vector<int> res = findIndices(text, target);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}