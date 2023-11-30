#include <vector>

int count_nums(std::vector<int> n){
    int count = 0;
    for(int i=0; i<n.size(); i++){
        int num = n[i];
        int sum = 0;
        while(num != 0){
            int digit = num % 10;
            sum += abs(digit);
            num /= 10;
        }
        if(sum > 0){
            count++;
        }
    }
    return count;
}

int main(){
    // Test cases
    // assert(count_nums({1}) == 1);

    return 0;
}