```cpp
#include <vector>
#include <utility>
#include <iostream>

std::vector<std::pair<int, int>> result(std::vector<int> a);
int pluck(std::vector<int> a);

bool issame(std::vector<int> a, std::vector<int>b){
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int pluck(std::vector<int> a){
    int minVal = *min_element(a.begin(), a.end());
    int index = 0;
    for(int i=0; i<a.size(); i++){
        if(a[i] == minVal)
            index=i;
    }
    return index;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4};
    std::vector<std::pair<int, int>> output = result(arr);
    for (auto p : output) {
        cout << "Number: " << p.first << ", Index: " << p.second << endl;
    }
    return 0;
}