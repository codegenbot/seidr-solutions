#include <vector>

int add(std::vector<int> lst){
    int sum = 0;
    for(int i=1; i<lst.size(); i=i+2){
        if(i < lst.size() && lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}

int main() {
    std::vector<int> lst;
    int num;
    while(true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;
        if(num == -1)
            break;
        lst.push_back(num);
    }
    std::cout << "Sum of even numbers: " << add(lst) << std::endl;
    return 0;
}