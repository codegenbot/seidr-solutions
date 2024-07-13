#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    
    while (index <= text.length() - target.length()) {
        int start = text.find(target, index);
        
        if (start != -1) {
            indices.push_back(start);
            index = start + 1;
        } else {
            break;
        }
    }
    
    return indices;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}