```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result;
    for(int i : l){
        if(std::count(l.begin(),l.end(),i)==1)
            result.push_back(i);
    }
    return result;
}

int driver() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> output = unique(input);
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}

int main() {
    driver();
    return 0;
}