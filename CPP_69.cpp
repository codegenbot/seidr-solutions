#include <vector>
#include <map>

int search(vector<int> lst) {
    map<int, int> countMap;
    for (auto i : lst) {
        countMap[i]++;
    }
    
    for (auto p : countMap) {
        if (p.second > 1) return p.first; // Found a duplicate
    }
    return -1;
}

int main() {
    vector<int> lst = {10, 20, 30, 40, 50, 10};
    int result = search(lst);
    cout << "Duplicate found at index: " << result << endl;
}