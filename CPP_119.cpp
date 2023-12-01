#include <string>
#include <vector>

std::string match_parens(std::vector<std::string> lst){
    std::string s1 = lst[0]; // first string
    std::string s2 = lst[1]; // second string
    int count = 0; // count of open parentheses

    // iterate through first string
    for(int i=0; i<s1.length(); i++){
        if(s1[i] == '('){
            count++;
        }
        else{
            count--;
        }
    }

    // iterate through second string
    for(int i=0; i<s2.length(); i++){
        if(s2[i] == '('){
            count++;
        }
        else{
            count--;
        }
    }

    // check if count is zero, which means all parentheses are balanced
    if(count == 0){
        return "Yes";
    }
    else{
        return "No";
    }
}