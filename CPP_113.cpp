#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if (c % 2 != 0) {
                count++;
            }
        }
        std::string temp = "the number of odd elements ";
        temp += (count > 0 ? std::to_string(count) : "no");
        temp += " in the str";
        temp += std::to_string(i+1);
        temp += " of the input.";
        result.push_back(temp);
    }
    return result;
}

int main() {
    vector<string> test;
    string s;
    while (true) {
        cout << "Enter a string (-1 to stop): ";
        cin >> s;
        if (s == "-1") break;
        test.push_back(s);
    }
    
    std::vector<std::string> result = odd_count(test);
    
    for(std::string s : result){
        cout << s << endl;
    }
    
    return 0;
}