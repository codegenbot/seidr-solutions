#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int index = 0;
    
    while(index <= text.length() - target.length()){
        int pos = text.find(target, index);
        
        if(pos != string::npos){
            result.push_back(pos);
            index = pos + 1;
        }else{
            break;
        }
    }
    
    return result;
}

int main() {
    // Test cases
    string text = "";
    cout << "Enter the text: ";
    cin >> text;

    string target;
    cout << "Enter the target string: ";
    cin >> target;

    vector<int> result = indicesOfSubstring(text, target);

    cout << "Indices of substring are: ";
    for(int i : result){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}