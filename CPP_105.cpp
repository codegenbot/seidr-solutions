#include <vector>
#include <string>
#include <iostream>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != b[i]) 
            return false;
    return true;
}

vector<string> by_length(const vector<int>& arr) {
    vector<string> result;
    for (int num : arr) {
        int length = to_string(num).size();
        result.push_back(to_string(length));
    }
    return result;
}

int main_test() {
    vector<int> intArray;
    cout << "Enter the numbers separated by space: ";
    string str;
    while(getline(cin, str)) {
        intArray.push_back(stoi(str));
    }
    
    vector<string> lengthArr = by_length(intArray);
    vector<string> b = by_length({518, 5, 10});
    assert(issame(lengthArr, b));
    return 0;
}