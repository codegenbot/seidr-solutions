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
    vector<int> temp;
    for(int i = 0; i < result.size(); i++) {
        if(i == 0 || !issame({result[i]}, {temp.back()}))
            temp.push_back(result[i]);
    }
    return temp;
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
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> result = unique(v);
    for(int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    return 0;
}