#include <vector>
#include <iostream>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;

    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());

        auto it = find_if(lst.begin(), lst.end(),
            [&](int x) { return x == min_val; });
        result.push_back(*it);
        lst.erase(it);

        it = find_if(lst.begin(), lst.end(),
            [&](int x) { return x == max_val; });
        result.push_back(*it);
        lst.erase(it);
    }

    return result;
}

int main() {
    vector<int> input;
    cout << "Enter numbers separated by space: ";
    int temp;
    while (cin >> temp) {
        input.push_back(temp);
        if (cin.peek() == '\n') break;
    }
    if(input.empty()) return 0;
    vector<int> output = strange_sort_list(input);
    for(int i : output) cout << i << " ";
    cout << endl;
}