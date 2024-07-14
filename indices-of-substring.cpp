#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int n = text.size(), m = target.size();
    for(int i=0; i<n-m+1; i++) {
        if(text.substr(i, m) == target) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;

    vector<int> indices = findIndices(text, target);

    for(int i: indices) {
        cout << i << " ";
    }

    return 0;
}