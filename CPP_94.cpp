```cpp
int main() {
    std::vector<int> lst = {127, 97, 8192}; 
    int result = sumOfSquares(lst); 
    std::cout << "The sum is: " << result << std::endl; 
    return 0;
}

int sumOfSquares(const std::vector<int>& lst) {
    int sum = 0;
    for(int i : lst) {
        sum += i*i;
    }
    return sum;
}