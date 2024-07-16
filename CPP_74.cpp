#include <vector>
#include <string>

using namespace std;

int totalChars(int val) {
    return val;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (totalChars(lst1.size()) < totalChars(lst2.size())) {
        return lst1;
    } else {
        return issame(lst1, lst2) ? lst1 : lst2;
    }
}