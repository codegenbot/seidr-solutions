#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int n = text.length(), m = target.length();
    
    for(int i = 0; i <= n - m; i++){
        if(text.substr(i, m) == target){
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    string text;
    cout << "Enter the text: ";
    getline(cin, text);
    
    string target;
    cout << "Enter the target string: ";
    cin >> target;
    
    vector<int> result = findIndices(text, target);
    
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
    
    return 0;
}