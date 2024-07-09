#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    
    for (char& ch : s) {
        bool found = false;
        for (char& cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            temp += ch;
        }
    }
    
    string reversedTemp = temp;
    reverse(reversedTemp.begin(), reversedTemp.end());
    
    result.push_back(temp);
    result.push_back(temp == reversedTemp ? "True" : "False");
    
    return result;
}

int main() {
    // Example usage
    string s = "abcdedcba";
    string c = "ab";
    vector<string> output = reverse_delete(s, c);
    
    cout << "Result: (" << output[0] << "," << output[1] << ")" << endl;
    
    return 0;
}