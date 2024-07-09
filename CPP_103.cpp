#include <string>
#include <cassert>

std::string calculateBinary(int a, int b){
    return std::bitset<8>(a+b).to_string().substr(0, 3);
}

int main(){
    int rounded_avg = std::stoi(calculateBinary(5, 5), nullptr, 2);
    assert (std::to_string(rounded_avg) == "101");
}