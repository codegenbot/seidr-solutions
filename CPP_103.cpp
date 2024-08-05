#include <string>
#include <cassert>

std::string calculate_binary_avg(int a, int b){
    return std::bitset<8>((a + b) / 2).to_string();
}

int main(){
    assert(calculate_binary_avg(5, 5) == "101");
    return 0;
}