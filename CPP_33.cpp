```c++
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
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        int val;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> val;
        input.push_back(val);
    }
    
    std::vector<int> sorted_input = sort_third(input);
    for(int i = 0; i < sorted_input.size(); i++) {
        std::cout << "Element " << i + 1 << ": " << sorted_input[i] << std::endl;
    }
    return 0;
}