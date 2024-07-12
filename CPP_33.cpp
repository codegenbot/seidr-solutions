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
    int n, num;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;
    
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element number " << i + 1 << ": ";
        std::cin >> num;
        vec[i] = num;
    }
    
    std::vector<int> sorted_vec = sort_third(vec);
    
    std::cout << "The sorted array is: ";
    for (int x : sorted_vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    
    return 0;
}