#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int n = text.length();
    int m = target.length();
    for(int i=0; i<=n-m; i++){
        if(text.substr(i,m) == target){
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> indices = findIndices(text, target);
    for(int index : indices)
        cout << index << " ";
    return 0;
}