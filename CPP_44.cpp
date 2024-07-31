#include <string>

int main(){
    using namespace std;
    int x = 10;
    std::stringstream ss; 
    ss << x; 
    assert(change_base(x, x + 1) == std::to_string(x)); 
    return 0;
}