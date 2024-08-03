#include <string>

bool is_nested(const std::string& str) {
    int count = 0;
    for(auto it = str.begin(); it != str.end(); ++it){
        if(*it == '['){
            count++;
        } else if(*it == ']' && count > 0){
            count--;
        }
    }
    return count != 0;
}

int main() {
    assert(is_nested("]]]]]]]]") == false);
    return 0;
}