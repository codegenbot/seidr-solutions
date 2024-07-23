int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        int num;
        std::cout << "Enter integer #"<<(i+1)<<": ";
        std::cin >> num;
        lst.push_back(num);
    }
    std::cout << "Sum of digits of the maximum prime is: "<<skjkasdkd(lst)<<std::endl;
    return 0;
}