```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;
    sort(lst1.begin(), lst1.end());
    sort(lst2.begin(), lst2.end());

    int i = 0, j = 0;
    
    while (i < lst1.size() && j < lst2.size()) {
        if (lst1[i] == lst2[j]) {
            result.push_back(lst1[i]);
            i++;
            j++;
        } else if (lst1[i] < lst2[j]) {
            i++;
        } else {
            j++;
        }
    }

    return result;
}

int main() {
    vector<string> vec1 = {"hi", "admin"};
    vector<string> vec2 = {"hI", "Hi"};

    vector<string> result = total_match(vec1, vec2);

    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;