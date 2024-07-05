#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    auto total_chars = [](const vector<string>& lst) {
        int total = 0;
        for (const string& s : lst) {
            total += s.size();
        }
        return total;
    };

    int total1 = total_chars(lst1);
    int total2 = total_chars(lst2);

    return (total1 < total2) ? lst1 : lst2;
}

int main() {
    vector<string> lst1 = {"hello", "world"};
    vector<string> lst2 = {"hi", "planet"};
    
    vector<string> result = total_match(lst1, lst2);
    
    for (const string& s : result) {
        cout << s << " ";
    }
    return 0;
}