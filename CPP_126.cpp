#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst) {
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            bool flag = true;
            int j = i - 1;
            while(j >= 0 && lst[j] == lst[j+1]){
                j--;
            }
            int k = i;
            while(k < lst.size() && lst[k] == lst[k-1]){
                k++;
            }
            if(i - j > 1 || k - i > 1) return false;
        }
    }
    return true;
}