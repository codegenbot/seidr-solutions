#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(string(1, ch));
        }
    }
    string temp = "";
    for (int i = 0; i < result.size(); i++) {
        temp += result[i];
    }
    bool isPalindrome = false;
    int start = 0, end = temp.length() - 1;
    while (start < end) {
        if (temp[start] != temp[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    result.push_back(isPalindrome ? "True" : "False");
    return result;
}

int main(){
    assert(issame(reverse_delete("mamma", "mia") , vector<string>({"", "True"})));
    cout << "Program executed correctly." << endl;
    return 0;
}