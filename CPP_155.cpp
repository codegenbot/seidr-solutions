#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_count(int num){
    int even_count = 0;
    int odd_count = 0;
    int digit;

    num = abs(num); // make the number positive

    while(num > 0){
        digit = num % 10;
        if(digit % 2 == 0){
            even_count++;
        } else {
            odd_count++;
        }
        num = num / 10;
    }

    std::vector<int> result = {even_count, odd_count};
    return result;
}

int main(){
    assert(issame(even_odd_count(0) , {1, 0}));
    assert(issame(even_odd_count(12345) , {3, 2}));
    
    return 0;
}