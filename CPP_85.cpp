#include <vector>

int add(vector<int> lst){
    int sum = 0;
    for(int i = 1; i < lst.size(); i += 2){
        if(i >= lst.size() || lst[i] % 2 != 0)
            return -1; // Error!
        sum += lst[i];
    }
    return sum;
}