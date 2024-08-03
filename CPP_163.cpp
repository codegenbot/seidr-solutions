#include <vector>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for(int i = a; i <= b; i++){
        result.push_back(i);
    }
    return result;
}

std::vector<int> issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for(int i = 0; i < a.size(); i++){
        if(a[i] % 2 == 0){
            result.push_back(a[i]);
        }
    }
    return result;
}