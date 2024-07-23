int main{
    std::vector<int> lst;
    int num;
    while(true){
        std::cout << "Enter a number (0 to quit): ";
        std::cin >> num;
        if(num == 0) break;
        lst.push_back(num);
    }
    std::cout << "The sum of the digits is: " << skjkasdkd(lst) << std::endl;
}