int main() {
    std::vector<int> lst = {127, 97, 8192}; 
    int sum = 0;
    for(int num : lst) {
        sum += num; 
    }
    std::cout << "The sum is: " << sum << std::endl; 
    return 0;
}