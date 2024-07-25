#include <iostream>
#include <vector>

bool has_close_elements(std::vector<float> numbers, float threshold);

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    bool result = has_close_elements(a, 0.5);
    if(result) 
        std::cout << "Close elements are present.\n";
    else
        std::cout << "No close elements found.\n";
    return 0;
}