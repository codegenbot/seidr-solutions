#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLength = target.length();
    for(int i=0; i<=text.length()-targetLength; i++){
        if(text.substr(i, targetLength) == target){
            indices.push_back(i);
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
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}