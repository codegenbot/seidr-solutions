#include <vector>
#include <cmath>

long long double_the_difference(vector<int> lst){
    long long sum = 0;
    
    for(int i=0; i<lst.size(); i++){
        if(lst[i] > 0 && lst[i] == floor(lst[i]) && (int)lst[i] % 2 == 1){
            sum += lst[i] * lst[i];
        }
    }
    
    return sum;
}