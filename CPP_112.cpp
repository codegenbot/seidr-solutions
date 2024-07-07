```cpp
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    std::string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    result.push_back(temp);
    std::string rev = temp;
    std::reverse(rev.begin(), rev.end());
    result.push_back((temp == rev) ? "True" : "False");
    return result;
}

bool issame(vector<string> a, vector<string>b){
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

int main(){
    string s = "hello";
    string c = "lo";
    vector<string> result = reverse_delete(s,c);
    if(issame(result,{reverse_delete(s,c)[0],(reverse_delete(s,c))[1]})){
        cout << "The strings are the same." << endl;
    }else{
        cout << "The strings are not the same." << endl;
    }
}