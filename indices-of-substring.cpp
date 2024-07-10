#include <vector>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    int index = 0;
    
    while (index < text.size()) {
        size_t found = text.find(target, index);
        
        if (found != string::npos) {
            result.push_back(found);
            index = found + 1;
        } else {
            break;
        }
    }
    
    return result;
}

int main() {
    // Read input
    string text, target;
    cin >> text >> target;

    // Call the function and print output
    vector<int> result = indicesOfSubstring(text, target);
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}