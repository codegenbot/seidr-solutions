#include <vector>
#include <cassert>

std::vector<int> counts(std::vector<int> b, int num) {
    std::vector<int> result;
    int count = 0;
    for(int i = 0; i < b.size(); i++){
        if(b[i] == num){
            count++;
        }
    }
    result.push_back(count);
    return result;
}

int main(){
    std::vector<int> input = {1, 2, 3, 3, 4, 3, 5};
    int number = 3;
    
    std::vector<int> result = counts(input, number);
    
    for(int i = 0; i < result.size(); i++){
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
}