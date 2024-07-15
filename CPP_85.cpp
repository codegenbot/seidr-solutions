#include <vector>

int add(std::vector<int> lst){
    int sum = 0;
    for(int i = 0; i < lst.size(); ++i){
        if(i % 2 == 1 && lst[i] % 2 == 0){
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    assert(add({4, 4, 6, 8}) == 12);
    return 0;
}