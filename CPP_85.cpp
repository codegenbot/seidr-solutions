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
    int n;
    
    // Input the number of elements in the list
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Input the elements of the list
    for(int i=0; i<n; i++) {
        int x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        lst.push_back(x);
    }

    // Calculate and print the sum of even elements at odd positions
    std::cout << "Sum of even elements at odd positions: " << add(lst) << std::endl;

    return 0;
}