#include <iostream>
#include <vector>

int sum_squares(std::vector<int> lst){
    int total = 0;
    for(int i=0; i<lst.size(); i++){
        if(i%3==0 && i%4!=0)
            total += lst[i]*lst[i];
        else if(i%4==0 && i%3!=0)
            total += lst[i]*lst[i]*lst[i];
    }
    return total;
}

int main() {
    std::vector<int> lst;
    int num;
    
    // Read input
    std::cout << "Enter numbers (enter -1 to finish): ";
    while ((std::cin >> num) && num != -1)
        lst.push_back(num);
        
    if (!lst.empty())
        std::cout << "Sum of squares: " << sum_squares(lst) << std::endl;
    else
        std::cout << "No numbers entered." << std::endl;

    return 0;
}