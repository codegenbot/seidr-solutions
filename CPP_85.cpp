#include <iostream>
#include <vector>

int add(std::vector<int> lst){
    int sum = 0;
    for(int i=1; i<lst.size(); i+=2){
        if(lst[i]%2 == 0)
            sum += lst[i];
    }
    return sum;
}

int main(){
    assert (add({4, 4, 6, 8}) == 12);
    std::vector<int> test = {1, 3, 5, 7};
    assert (add(test) == 0);

    return 0;
}