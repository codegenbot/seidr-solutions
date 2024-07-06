#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

void sort_third_main() {
    std::vector<int> l = {4, 2, 9, 6, 23, 12, 34, 11};
    std::vector<int> res = sort_third(l);
    for (int i : res) std::cout << i << " ";
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> result;
    int k = 0;
    for(int i = 0; i < l.size(); ) {
        if(i % 3 == 0) {
            int j = 0;
            while(j < l.size() && i+j < l.size()) {
                result.push_back(l[i+j]);
                j++;
            }
            std::sort(result.begin(), result.end());
            for(int i1 = 0; i1 < result.size(); ) {
                if(k % 3 == 0) {
                    res.push_back(result[i1]);
                    k += 3;
                    break;
                }
                k++;
                i1++;
            }
        } else {
            result.push_back(l[i]);
            k++;
        }
    }
    return result;
}