#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int textSize = text.size();
    int targetSize = target.size();

    for(int i=0; i <= textSize - targetSize; i++) {
        if(text.substr(i, targetSize) == target) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    // Read input
    string text;
    cin >> text;

    // Read the target string
    string target;
    cin >> target;

    // Print the result
    vector<int> result = findIndices(text, target);
    cout << "[" << (result.empty() ? "0" : to_string(result[0]));
    for(int i=1; i < result.size(); i++) {
        cout << ", " << result[i];
    }
    cout << "]" << endl;

    return 0;
}