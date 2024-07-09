```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;
    int total_chars1 = 0, total_chars2 = 0;

    for (const auto& str : lst1) {
        total_chars1 += str.length();
    }
    for (const auto& str : lst2) {
        total_chars2 += str.length();
    }

    if (total_chars1 < total_chars2) {
        return lst1;
    } else if (total_chars1 > total_chars2) {
        return lst2;
    } else {
        return lst1;
    }
}

int main() {
    vector<string> result = total_match({"this"}, {});
    assert(issame(result, {}));
    
    // Example usage
    vector<string> list1 = {"hello", "world"};
    vector<string> list2 = {"goodbye", "cruel", "world"};
    vector<string> output = total_match(list1, list2);
    if (issame(output, list1)) {
        cout << "List 1 is the same length as List 2." << endl;
    } else if (issame(output, list2)) {
        cout << "List 2 is the same length as List 1." << endl;
    } else {
        cout << "Neither lists are the same length." << endl;
    }
    
    return 0;
}