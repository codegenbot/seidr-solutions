#include <vector>

int search(vector<int> lst) {
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
    // Test case 1
    vector<int> lst1 = {1, 2, 3, 4, 4};
    int result1 = search(lst1);

    // Test case 2
    vector<int> lst2 = {1, 1, 3, 5, 5, 5};
    int result2 = search(lst2);

    // Test case 3
    vector<int> lst3 = {1, 1, 1, 1};
    int result3 = search(lst3);

    return 0;
}