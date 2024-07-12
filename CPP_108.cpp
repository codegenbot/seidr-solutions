int main() {
    int singleNum = 123; 
    int nums[] = {singleNum}; 
    int size = sizeof(nums)/sizeof(nums[0]);
    std::cout << "The number of positive integers with an odd digital root is: " << count_nums(&nums[0], 1) << std::endl;
    assert (count_nums({1}, 1) == 1); 
    return 0;
}