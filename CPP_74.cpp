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
    // Test cases
    vector<string> test1 = {"apple", "banana", "cherry"};
    vector<string> test2 = {"orange", "grape"};
    
    vector<string> result = total_match(test1, test2);
    
    if (issame(result, test1)) {
        // Output
        return 1;
    } else {
        // Output
        return 0;
    }
}