#include <vector>

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b){
    return a == b;
}

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x);

int main(){
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}});
    
    return 0;
}