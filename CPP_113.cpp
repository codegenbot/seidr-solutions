#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> odd_count(std::vector<std::string> lst){
    std::vector<std::string> result;
    for(std::string str : lst){
        int oddCount = 0;
        for(char c : str){
            if((c - '0') % 2 != 0){
                oddCount++;
            }
        }
        result.push_back("the number of odd elements " + std::to_string(oddCount) + "\n the string " + str + " of the \ninput.");
    }
    return result;
}

bool areSame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(unsigned int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(areSame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2\n the string 271 of the \ninput.",
        "the number of odd elements 3\n the string 137 of the \ninput.",
        "the number of odd elements 2\n the string 314 of the \ninput."
    }));

    return 0;
}