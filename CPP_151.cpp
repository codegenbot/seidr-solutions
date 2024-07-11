```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for(float x : lst) {
        if(x > 0 && (int)x == x) { 
            if((int)x % 2 != 0) { 
                sum += pow((int)x, 2); 
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 

    float num;
    while(std::cin >> num) {
        lst.push_back(num);
    }

    long long result = double_the_difference(lst);

    std::cout << "The final answer is: " << result << endl;

    return 0;
}