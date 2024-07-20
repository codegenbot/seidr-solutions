#include <string>
#include <algorithm>

bool is_nested(const std::string& str) {
    int count = 0;
    for(char c : str){
        if(c == '[') count++;
        else if(c == ']') {
            if(count <= 0) return false;
            count--;
        }
    }
    return count > 0;
}

int main() {
    assert(is_nested("]]]]]]]]") == false);
}