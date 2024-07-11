```
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    
    return true;
}

vector<string> filter_by_substring(vector<string> arr, string sub) {
    vector<string> result;
    for (auto s : arr) {
        if (s.find(sub) != string::npos)
            result.push_back(s);
    }
    return result;

int main() {
    vector<string> inputArr, outputArr;
    cout << "Enter the size of the array: ";
    int n; cin >> n;
    
    for(int i=0; i<n; i++) {
        string str; cin >> str;
        inputArr.push_back(str);
    }
    
    cout << "Enter the substring to filter: ";
    string sub; cin >> sub;
    
    outputArr = filter_by_substring(inputArr, sub);
    
    if(issame(inputArr, outputArr))
        cout << "Filtering result is same as original array.\n";
    else
        cout << "The filtered array is different from the original array.\n";
    
    return 0;
}