```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int by_length(const vector<string>& a) {
    int length = 0;
    for (const auto& s : a) {
        length += s.size();
    }
    return length;
}

int main() {
    vector<string> my_list {"apple", "banana", "orange"};
    sort(my_list.begin(), my_list.end(), by_length);
    cout << "Sorted list: ";
    for (const auto& s : my_list) {
        cout << s << ", ";
    }
    cout << endl;
    return 0;
}
```