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
    vector<string> list1 = {"apple", "banana", "cherry"};
    vector<string> list2 = {"orange", "pear"};
    
    vector<string> result = total_match(list1, list2);
    
    if (issame(list1, list2)) {
        cout << "Lists are the same" << endl;
    } else {
        cout << "Lists are different" << endl;
    }
    
    return 0;
}