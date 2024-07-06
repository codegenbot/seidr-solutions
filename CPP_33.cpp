#include <vector>
#include <algorithm>

bool std::equal(a.begin(), a.end(), b.begin());

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> result;
    for(int i = 0; i < l.size(); ) {
        if(i % 3 == 0) {
            std::vector<int> temp;
            int j = 0;
            while(j < l.size() && i+j < l.size()) {
                temp.push_back(l[i+j]);
                j++;
            }
            sort(temp.begin(), temp.end());
            for(int k = 0; k < temp.size(); ) {
                if(k % 3 == 0) {
                    result.push_back(temp[k]);
                    i += 3;
                    break;
                }
                k++;
            }
        } else {
            result.push_back(l[i]);
            i++;
        }
    }
    return result;
}

int sort_third_main() {
    std::vector<int> l = {4, 2, 9, 6, 23, 12, 34, 11};
    std::vector<int> res = sort_third(l);
    for(int i : res) cout << i << " ";
}