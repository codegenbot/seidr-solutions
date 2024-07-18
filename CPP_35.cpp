#include <vector>
#include <algorithm>

float max_element(const vector<float>& l){
    return *std::max_element(l.begin(), l.end());
}

int main(){
    std::vector<float> numbers(5);
    // Input numbers from the user
    for(int i=0; i<5; i++){
        std::cin >> numbers[i];
    }
    
    float max = max_element(numbers);
    std::cout << "Max Element: " << max << std::endl;

    return 0;
}