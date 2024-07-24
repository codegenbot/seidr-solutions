#include <vector>
#include <iostream>

bool is_sorted(vector<int> lst) {
    if(lst.size() <= 1)
        return true;

    for(int i = 1; i < lst.size(); i++){
        if(lst[i] >= lst[i-1])
            continue;
        else{
            int count = 0;
            for(int j = i; j < lst.size(); j++){
                if(lst[j] == lst[i])
                    count++;
                else
                    break;
            }
            if(count > 1)
                return false;
            else
                return false;
        }
    }
    return true;
}

int main() {
    assert(is_sorted({1, 2, 3, 4}) == true);
    return 0;
}