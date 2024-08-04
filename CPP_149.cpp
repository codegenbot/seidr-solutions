#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return (a == b);
}

int sorted_list_sum(const vector<string>& lst) {
    vector<string> filtered_lst = lst;
    filtered_lst.erase(remove_if(filtered_lst.begin(), filtered_lst.end(), [](const string& s){ return s.length() % 2 != 0; }), filtered_lst.end());
    sort(filtered_lst.begin(), filtered_lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    
    int sum = 0;
    for (const string& str : filtered_lst) {
        sum += stoi(str);
    }
    
    return sum;
}

int main() {
    // Main function implementation
    return 0;
}