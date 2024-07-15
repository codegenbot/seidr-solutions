#include <vector>
bool issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> count(2, 0);
    while(num != 0){
        if(abs(num % 10) % 2 == 0){
            count[0]++;
        } else {
            count[1]++;
        }
        num /= 10;
    }
    return count;
}