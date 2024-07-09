#include <iostream>
#include <vector>

float max_element(std::vector<float> l){
    float max_num = l[0];
    for(int i = 1; i < l.size(); i++){
        if(l[i] > max_num){
            max_num = l[i];
        }
    }
    return max_num;
}

int main(){
    std::vector<float> arr = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    std::cout << max_element(arr) << std::endl;
    return 0;
}