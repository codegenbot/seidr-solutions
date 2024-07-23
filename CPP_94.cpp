int main{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if(num < 0) num = -num;
    std::vector<int> numbers(1);
    for(int i = 2; i <= num; i++){
        numbers.push_back(i);
    }
    int result = skjkasdkd(numbers);
    std::cout << "The sum of the digits is: " << result << std::endl;
}