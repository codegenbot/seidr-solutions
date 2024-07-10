```cpp
int main() {
    int n;
    std::cin >> n;
    if(n > 10000000) { 
        std::cout << "Exceeded max limit, cannot continue." << std::endl;
        return -1; 
    }
    std::vector<int> nums;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num; 
        nums.push_back(num); 
    }
    if (!nums.empty()) {  
        std::cout << "Count of positive sums is: " << count_nums(nums) << std::endl;
    }
    return 0;

}