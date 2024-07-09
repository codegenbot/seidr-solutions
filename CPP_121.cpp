#include <vector>

int sum_of_odd_numbers(vector<int> lst){
    int sum = 0;
    for(int i = 0; i < lst.size(); i += 2){
        if(lst[i] % 2 != 0){
            sum += lst[i];
        }
    }
    return sum;
}

int main(){
    int result = sum_of_odd_numbers({3, 13, 2, 9});
    assert(result == 3);
    return 0;
}