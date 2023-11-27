#include <string>

bool is_nested(std::string str){
    int count = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == '['){
            count++;
        }
        else if(str[i] == ']'){
            count--;
        }
        if(count < 0){
            return true;
        }
    }
    return false;
}

int main() {
    // Test cases
    bool result1 = is_nested("[[[]]]");
    bool result2 = is_nested("]]]]]]]]");
    
    return 0;
}