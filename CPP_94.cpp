int main {
    std::vector<int> lst;
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;
    for(int i = 0; i < size; i++){
        std::cout << "Element " << i+1 << ": ";
        int num;
        std::cin >> num;
        lst.push_back(num);
    }
    std::cout << "Sum of digits in the maximum prime number: " << skjkasdkd(lst) << std::endl;
}