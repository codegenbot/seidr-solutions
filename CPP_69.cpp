#include <vector>

int search(std::vector<int> lst) {
    int result = -1;
    for (int i = 1; i <= lst.size(); i++) {
        int count = 0;
        for (int j = 0; j < lst.size(); j++) {
            if (lst[j] == i) {
                count++;
            }
        }
        if (count >= i && i > result) {
            result = i;
        }
    }
    return result;
}

int main() {
    std::vector<int> lst = {1, 2, 3, 4, 5, 2, 3, 4, 5, 5};
    int number = search(lst);
    return 0;
}