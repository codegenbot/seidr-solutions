#include <vector>
#include <string>

bool issame(vector<string> a);

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

bool issame(vector<string> a) {
    vector<string> result = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    if(a.size()!=result.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=result[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(by_length({9, 4, 8})));
}