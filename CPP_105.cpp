#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> group_by_length(vector<int> arr) {
    vector<vector<string>> result;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            string name = "";
            switch (num) {
                case 1:
                    name = "One";
                    break;
                case 2:
                    name = "Two";
                    break;
                case 3:
                    name = "Three";
                    break;
                case 4:
                    name = "Four";
                    break;
                case 5:
                    name = "Five";
                    break;
                case 6:
                    name = "Six";
                    break;
                case 7:
                    name = "Seven";
                    break;
                case 8:
                    name = "Eight";
                    break;
                case 9:
                    name = "Nine";
                    break;
            }
            vector<string> temp;
            for (int i = 0; i < num; i++) {
                temp.push_back(name);
            }
            bool isAdded = false;
            for (auto &v : result) {
                if (issame(v, temp)) {
                    v.insert(v.end(), temp.begin(), temp.end());
                    isAdded = true;
                    break;
                }
            }
            if (!isAdded) {
                result.push_back(temp);
            }
        }
    }
    return result;
}