#include <vector>

bool isListSorted(vector<int> lst) {
    int n = lst.size();
    for(int i = 0; i < n-1; i++) {
        if(lst[i] >= lst[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert (isListSorted({1, 2, 3, 4}) == true);
    return 0;
}