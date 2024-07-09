```
int n = 0;
std::vector<float> lst;

int main() {
    float input; 
    while (1) {
        std::cout << "Enter a number (negative to stop): ";
        std::cin >> input;
        
        if (input < 0) break;
        lst.push_back(input);
        n++;
    }
    
    long long sum = double_the_difference(lst);
    return static_cast<int>(sum);
}

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (static_cast<long long>(num) % 2 != 0) { 
                sum += static_cast<long long>(std::pow(num, 2)); 
            }
        }
    }
    return sum;
}