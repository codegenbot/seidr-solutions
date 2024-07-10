#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a){
    return a == {"E", "D-"};
}

int main(){
    assert(issame({"E", "D-"}));
}