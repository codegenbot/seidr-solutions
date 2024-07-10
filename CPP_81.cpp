#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<double>& a, const std::vector<std::string>& b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main(){
    assert(issame({0, 0.7}, {"E", "D-"}));
}