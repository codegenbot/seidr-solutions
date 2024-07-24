```cpp
#include <algorithm>
#include <vector>
#include <string>
#include <initializer_list>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (stoi(a[i]) != stoi(b[i])) {
            return false;
        }
    }
    return true;
}

vector<string> sorted_list_sum(vector<vector<string>> lst) {
    vector<int> sums;
    for (int i = 0; i < lst[0][0].size(); i++) {
        int sum = 0;
        for (int j = 1; j < lst.size(); j++) {
            bool found = false;
            for (const auto& str : lst[j]) {
                if (str == lst[0][0][i]) {
                    sum += stoi(str);
                    found = true;
                    break;
                }
            }
            if (!found) {
                sums.push_back(to_string(sum));
                sum = 0;
            } else {
                sum = 0;
                sums.push_back(to_string(sum));
            }
        }
    }

    vector<string> temp;
    for (auto& vec : lst) {
        temp.insert(temp.end(), vec.begin(), vec.end());
        sort(temp.begin(), temp.end());
        vec.clear();
        vec.insert(vec.end(), temp.begin(), temp.end());
        temp.clear();
    }
    
    vector<string> result;
    for (const auto& str : sums) {
        if (stoi(str) % 2 == 0) {
            result.push_back("even");
        } else {
            result.push_back("odd");
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of lists: ";
    cin >> n;

    vector<vector<string>> lst(n);
    for (int i = 0; i < n; i++) {
        int m;
        cout << "Enter the number of elements in list " << i + 1 << ": ";
        cin >> m;

        cout << "Enter the elements: ";
        for (int j = 0; j < m; j++) {
            string str;
            cin >> str;
            lst[i].push_back(str);
        }
    }

    vector<string> output = sorted_list_sum(lst);

    cout << "The result is: ";
    for (const auto& str : output) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}