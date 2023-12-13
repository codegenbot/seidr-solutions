#include <iostream>
#include <vector>
#include <string>

std::vector<int> even_odd_count(int num){
    int even_count = 0;
    int odd_count = 0;
    std::string str_num = std::to_string(std::abs(num));
    
    for(int i = 0; i < str_num.length(); i++){
        int digit = str_num[i] - '0';
        if(digit % 2 == 0){
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    return std::vector<int>{even_count, odd_count};
}

bool compare_vectors(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main(){
    std::vector<std::vector<int>> input = {
        {0, 1},
        {12345, 3, 2},
        {246, 3, 0},
        {13579, 0, 5},
        {-987654321, 4, 5}
    };
    
    for(int i = 0; i < input.size(); i++){
        std::vector<int> expected = {input[i][1], input[i][2]};
        std::vector<int> result = even_odd_count(input[i][0]);
        
        if(compare_vectors(expected, result)){
            std::cout << "Test case " << i+1 << " passed." << std::endl;
        } else {
            std::cout << "Test case " << i+1 << " failed." << std::endl;
        }
    }
    
    return 0;
}