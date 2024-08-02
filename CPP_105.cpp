#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string>b) {
    if (a == b)
        return true;
    else
        return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<string> result = by_length(arr);
    for (string s : result) {
        cout << s << endl;
    }
    if (issame(result, {"Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Two", "One"}))
        cout << "The two vectors are the same." << endl;
    else
        cout << "The two vectors are not the same." << endl;
    
    return 0;
}