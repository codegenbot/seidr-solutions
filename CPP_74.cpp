#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int total_chars(vector<string> lst) {
    int total = 0;
    for (string str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    } else {
        return total_chars(lst2) < total_chars(lst1) ? lst2 : lst1;
    }
}

int main() {
    // Test the total_match function
    vector<string> test_lst1 = {"abc", "defg", "hi"};
    vector<string> test_lst2 = {"jklm", "no", "pqrstu"};
    
    vector<string> result = total_match(test_lst1, test_lst2);
    
    // Test the issame function
    bool same = issame(test_lst1, test_lst2);
    
    return 0;
}