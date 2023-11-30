#include <vector>

vector<int> even_odd_count(int num){
    vector<int> count(2, 0);
    
    while(num != 0){
        int digit = abs(num % 10);
        if(digit % 2 == 0){
            count[0]++;
        }else{
            count[1]++;
        }
        num /= 10;
    }
    
    return count;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert (issame(even_odd_count(0) , {1, 0}));
    assert (issame(even_odd_count(1230) , {2, 2}));
    assert (issame(even_odd_count(2468642) , {7, 0}));
    assert (issame(even_odd_count(1357911) , {0, 7}));
    
    return 0;
}