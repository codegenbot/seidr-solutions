#include <cassert>
#include <cmath>
#include <bitset>

std::string avg(int n, int m) {
    int sum = 0;
    for(int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round((double)sum / (m - n + 1));
    
    return std::bitset<sizeof(int)*8>(avg).to_string().substr(sizeof(int)*8-1-(int)log2(avg), sizeof(int)*8-1);
}

int main(){
    assert(avg(5, 5) == "101");
    return 0;
}