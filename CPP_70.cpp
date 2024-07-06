#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    for(int i = 1; i < lst.size(); i++) {
        if(lst[i] <= lst[i-1]) {
            std::swap(lst[i], lst[0]);
            for(int j = 0; j < i; j++) {
                std::cout << lst[j] << " ";
            }
            return lst;
        }
    }
    return lst;
}

int main() {
    std::vector<int> lst;
    int num;

    while(true) {
        std::cout << "Enter a number (or -1 to finish): ";
        std::cin >> num;

        if(num == -1) break;

        lst.push_back(num);
    }

    std::vector<int> result = strange_sort_list(lst);

    for(int n : result) {
        std::cout << n << " ";
    }
    
    return 0;
}