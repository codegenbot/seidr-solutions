#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> lst;
    int num;

    while (true) {
        cout << "Enter a number (or -1 to finish): ";
        cin >> num;

        if (num == -1)
            break;

        lst.push_back(num);
    }

    std::vector<int> result = strange_sort_list(lst);

    for (int n : result) {
        cout << n << " ";
    }
    
    return 0;
}

bool issame(int x, int y) {
    if (x > y)
        return true;
    else
        return false;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        for (int j = 0; j < lst.size() - i - 1; j++) {
            if (!issame(lst[j], lst[j + 1])) {
                int temp = lst[j];
                lst[j] = lst[j + 1];
                lst[j + 1] = temp;
            }
        }
    }
    return lst;
}