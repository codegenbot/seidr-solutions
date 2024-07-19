#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2)
        return -1; 
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] < sorted[i + 1])
            return sorted[i + 1];
    }
    return -1; 
}

int main() {
    vector<int> lst;
    int num;
    while (true) {
        cin >> num;
        lst.push_back(num);
        if (!cin || num == -1)
            break;
    }
    cout << next_smallest(lst); // pass the variable 'lst' here
    return 0;
}