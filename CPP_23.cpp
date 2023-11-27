#include <cassert>
#include <string>

int calculateLength(const std::string& str){
    return str.length();
}

int main() {
    assert (calculateLength("asdasnakj") == 9);
    return 0;
}