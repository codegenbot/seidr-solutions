#include <vector>

int add(vector<int> lst){
    if(lst.size() == 0) {
        throw runtime_error("Error: The input list is empty.");
    }
    int sum = 0;
    for(int i = 1; i < lst.size(); i += 2){
        if(lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}