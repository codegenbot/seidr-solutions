#include <iostream>
#include <vector>
#include <cmath>

float max_element(std::vector<float> l){
    float max = l[0];
    for(int i=1; i<l.size(); i++){
        if(l[i] > max)
            max = l[i];
    }
    return max;
}

int main(){
    std::vector<float> v;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i=0; i<n; i++){
        float temp;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> temp;
        v.push_back(temp);
    }
    
    float max = max_element(v);
    
    std::cout << "The maximum element is: " << abs(max) << std::endl;
    
    return 0;
}