#include <algorithm>
#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> c) {
    if(a.size()!=c.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=c[i]) return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(to_string(num));
        }
    }

    sort(numbers.begin(), numbers.end());

    reverse(numbers.begin(), numbers.end());

    return numbers;
}