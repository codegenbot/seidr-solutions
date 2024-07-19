#include <iostream>
#include <vector>
#include <algorithm>

void next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2)
        return; // or any other value that represents "None"
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] < sorted[i + 1])
            cout << sorted[i + 1] << endl;
            return;
    }
    cout << -1 << endl;
}

int main() {
    std::vector<int> lst(std::vector<int>::size_type(0)); 
    int num;
    while(std::cin >> num) {
        lst.push_back(num);
    }
    if(lst.size()>0) {
        next_smallest(lst);
    } else {
        cout << -1 << endl;
    }
    return 0;
}