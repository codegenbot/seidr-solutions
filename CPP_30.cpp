#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}
std::vector<float> get_positive(const std::vector<float>& l){
    return {l.begin(), l.end()};
}
int main(){
    assert(issame(get_positive({}) , {}));
    return 0;
}