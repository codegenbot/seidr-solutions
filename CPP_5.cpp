#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> intersperse(std::vector<int> numbers, int delimiter){
    std::vector<int> result;
    for(int i=0; i < numbers.size(); i++){
        result.push_back(numbers[i]);
        if(i < numbers.size()-1){
            result.push_back(delimiter);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 4};

    if(issame(a, b)){
        std::cout << "Vectors a and b are the same" << std::endl;
    } else {
        std::cout << "Vectors a and b are different" << std::endl;
    }

    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int delimiter = -1;
    std::vector<int> result = intersperse(numbers, delimiter);

    std::cout << "Interspersed vector: ";
    for(auto num : result){
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}