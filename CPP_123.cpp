```cpp
#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(std::vector<int> a,std::vector<int> b){
    return (a==b);
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> first;
    std::cout << "Enter elements for the first vector: ";
    for(int i=0; i<n; i++){
        int x;
        std::cin >> x;
        first.push_back(x);
    }

    std::vector<int> second;
    std::cout << "Enter elements for the second vector: ";
    for(int i=0; i<n; i++){
        int x;
        std::cin >> x;
        second.push_back(x);
    }

    if(issame(first,second)){
        std::cout << "Both vectors are same." << std::endl;
    }
    else{
        std::cout << "Both vectors are not same." << std::endl;
    }

    return 0;
}