#include <vector>

int add(vector<int> lst){
    int sum = 0;
    for(int i = 1; i < lst.size(); i += 2) {
        sum += lst[i];
    }
    return sum;
}