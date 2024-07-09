#include <vector>
#include <string>

vector<string> total_match(vector<string> lst1, vector<string> lst2);

int totalChars(vector<string> lst) {
    int total = 0;
    for (const string& str : lst) {
        total += str.size();
    }
    return total;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    }
    return lst2;
}

int main() {
    vector<string> v1 = {"abc", "def"};
    vector<string> v2 = {"ghi", "jkl"};
    
    vector<string> result = total_match(v1, v2);
    
    return 0;
}