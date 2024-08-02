#include <vector>

std::vector<int> issame(std::vector<int> a, std::vector<int> b){
    int total = number + std::min(need, remaining);
    int left = std::max(0, remaining - need);
    return {total, left};
}

std::vector<int> eat(int number, int need, int remaining){
    int total = number + std::min(need, remaining);
    int left = std::max(0, remaining - need);
    return {total, left};
}

int main(){
    assert (issame(eat(4, 5, 1), {5, 0}));
    return 0;
}