#include <vector>

int add(vector<int> lst){
    if(lst.size() == 0)
        return -1; // return -1 for empty vector
    int sum = 0;
    for(int i = 1; i < lst.size(); i += 2){
        if(i >= lst.size())
            return -1; // return -1 if the index is out of bounds
        if(lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}