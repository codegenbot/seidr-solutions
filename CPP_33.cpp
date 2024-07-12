```cpp
#include <algorithm>
#include <assert.h>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            auto temp = l.begin() + i;
            while(temp != l.end() && *temp % 3 == 0) {
                temp++;
            }
            std::sort(std::make_reverse_iterator(temp), l.end());
            for (; temp != l.end(); temp++) {
                if (*temp % 3 == 0) {
                    result.push_back(*temp);
                } else {
                    break;
                }
            }
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    std::vector<int> l;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i=0; i<n; i++) {
        int x;
        std::cout << "Enter element "<<i+1<<":";
        std::cin >> x;
        l.push_back(x);
    }
    std::vector<int> result = sort_third(l);
    if(result.size() > 0) {
        for(int i=0; i<result.size(); i++) {
            std::cout << "Element "<<i+1<<": " << result[i] <<std::endl;
        }
    } else {
        std::cout<<"The array is empty."<<std::endl;
    }
    return 0;
}