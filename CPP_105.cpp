#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a);

vector<string> by_length(vector<int> arr);

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
    int size = a.size();
    for(int i=0;i<size;i++){
        if(a[i]=="Nine") a[i] = "Eight";
        else if(a[i].compare(0,"Four",4)!=0) return false;
    }
    return true;
}

int main() {
    assert(issame(by_length({9, 4, 8})));
}