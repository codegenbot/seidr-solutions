```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> unique(vector<int> l){
    vector<int> result(l.begin(), unique_copy(l.begin(), l.end()));
    sort(result.begin(), result.end());
    return vector<int>(unique_copy(result.begin(), result.end()));
}

vector<int>::iterator unique_copy(vector<int>::iterator start, vector<int>::iterator end) {
    if (start == end)
        return end;
 
    std::vector<int> temp;
    for (; start != end; ++start) {
        if (std::find_if(temp.begin(), temp.end(),
                [&](int x) { return x == *start; }) == temp.end())
            temp.push_back(*start);
    }
    return temp.begin();
}

int main() {
    vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        input.push_back(x);
    }
    
    vector<int> output = unique(input);
    
    if(issame(input, output)) {
        cout << "Unique elements: ";
        for(int i = 0; i < output.size(); i++) {
            cout << output[i] << " ";
        }
        cout << endl;
    } else {
        cout << "The list is not unique." << endl;
    }
    
    return 0;
}