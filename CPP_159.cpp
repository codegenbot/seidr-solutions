#include <vector>

int issame(std::vector<int> a, std::vector<int> b);

std::vector<int> eat(int number, int need, int remaining){
    int totalEaten = number + need;
    int carrotsLeft = remaining - need;
    if(carrotsLeft < 0){
        carrotsLeft = 0;
    }
    std::vector<int> result = {totalEaten, carrotsLeft};
    return result;
}

int issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return 0;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}