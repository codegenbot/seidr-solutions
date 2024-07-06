```
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
        temp += " " + (count > 0 ? std::to_string(count) : "no");
        temp += " in the str";
        temp += std::to_string(i+1);
        temp += " of the input.";
        result.push_back(temp);
    }
    return result;
}

int main() {
    vector<string> test = {"271", "137", "314"};
    //vector<string> expected = {"the number of odd elements 2 in the str1 of the input.", 
    //                           "the number of odd elements 1 in the str2 of the input.", 
    //                           "the number of odd elements 1 in the str3 of the input."};
    vector<string> expected = {"the number of odd elements 2 in the str1 of the input.", 
                               "the number of odd elements 1 in the str2 of the input.", 
                               "the number of odd elements 0 in the str3 of the input."};
    assert(issame(odd_count(test), expected));
    return 0;
}