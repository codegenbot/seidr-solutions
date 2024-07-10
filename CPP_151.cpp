void calculate_odd_sum() {
    int num;
    std::vector<int> lst; 
    int odd_sum = 0; 

    while(std::cin >> num) {
        lst.push_back(num); 
        if (num % 2 != 0) {
            odd_sum += num;
        }
    }
    int result = double_the_difference(lst, odd_sum); 
    std::cout << "The sum of squares of odd numbers is: " << result << std::endl;
}

int double_the_difference(const std::vector<int>& lst, int odd_sum) {
    return (lst.size() * odd_sum - 2*std::accumulate(lst.begin(), lst.end(), 0)) / 2;