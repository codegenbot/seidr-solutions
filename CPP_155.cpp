#include <vector>

using namespace std;

vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    
    while(num != 0){
        int digit = abs(num % 10);
        if(digit % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
        num /= 10;
    }
    
    vector<int> result = {evenCount, oddCount};
    return result;
}

bool isSame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    vector<int> result = even_odd_count(1);
    assert(isSame(result, {0, 1}));

    return 0;
}