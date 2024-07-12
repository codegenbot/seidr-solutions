#include <algorithm>
#include <vector>

int main(){
    std::vector<int> lst;
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    std::cout << "Enter " << n << " integers: ";
    for(int i = 0; i < n; i++){
        int x;
        std::cin >> x;
        lst.push_back(x);
    }
    if(lst.size() < 2) std::cout << "-1";
    else {
        std::sort(lst.begin(), lst.end());
        for(int i = 0; i < lst.size() - 1; i++){
            if(lst[i] != lst[i+1]) {
                std::cout << lst[i];
                break;
            }
        }
        if(lst.size() > 1) std::cout << "-1";
    }
}