#include <vector>
#include <string>

bool issame(vector<string> a, vector<string>b) {
    if (a == b)
        return true;
    else
        return false;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    vector<string> result = by_length(arr);
    
    for(string s : result) {
        cout << s << " ";
    }
    cout << endl;

    if(issame(result, {"One", "Two", "Three", "Four", "Five"})) {
        cout << "The vectors are the same." << endl;
    } else {
        cout << "The vectors are not the same." << endl;
    }

    return 0;
}