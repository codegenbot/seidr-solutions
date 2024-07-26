#include <iostream>
#include <cassert>

std::string solve(const std::string &s) {
    std::string result = s;
    for(char &c : result){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    int left = 0, right = result.size() - 1;
    while(left < right){
        std::swap(result[left], result[right]);
        left++;
        right--;
    }
    return result;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}