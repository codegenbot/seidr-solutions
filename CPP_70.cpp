#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
        
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    
    return result;
}

int main() {
    vector<int> input_vector;
    cout << "Enter numbers (space separated): ";
    string temp_str;
    getline(cin, temp_str);
    size_t pos = 0;
    while ((pos = temp_str.find(" ")) != string::npos) {
        string num_str = temp_str.substr(0, pos);
        int num = stoi(num_str);
        input_vector.push_back(num);
        temp_str.erase(0, pos + 1);
    }
    if (!temp_str.empty()) {
        int num = stoi(temp_str);
        input_vector.push_back(num);
    }

    vector<int> sorted_vector = strange_sort_vector(input_vector);

    cout << "Sorted Vector: ";
    for (int i : sorted_vector) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}