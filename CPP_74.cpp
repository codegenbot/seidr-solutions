#include <string>

bool issame(string a, string b) {
        return a == b;
    }

vector<string> total_match(vector<string> lst1, vector<string> lst2);

int main() {
    // Sample usage of the total_match function
    vector<string> lst1 = {"apple", "banana", "orange"};
    vector<string> lst2 = {"grape", "melon"};
    vector<string> result = total_match(lst1, lst2);

    // Display the result
    for (string s : result) { 
        cout << s << " ";
    }
    cout << endl;

    return 0;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
        if (sum_chars(lst1) < sum_chars(lst2)) {
            return lst1;
        }
        return lst2;
    }  