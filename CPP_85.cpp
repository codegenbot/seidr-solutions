#include <vector>

int add(const std::vector<int>& lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); i += 2) {
        if (lst[i] % 2 == 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main(){
    assert(add({4, 4, 6, 8}) == 12);
    return 0;
}