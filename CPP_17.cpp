#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

void parse_music(std::vector<int>& data){
    // Your implementation for parse_music goes here
}

int main() {
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};
    
    if (issame(a, b)) {
        parse_music(a);
    }

    return 0;
}