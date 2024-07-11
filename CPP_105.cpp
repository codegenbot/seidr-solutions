#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> by_length(vector<int> arr) {
    vector<vector<string>> result(10);
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            string str = "";
            switch (num) {
                case 1:
                    str = "One";
                    break;
                case 2:
                    str = "Two";
                    break;
                case 3:
                    str = "Three";
                    break;
                case 4:
                    str = "Four";
                    break;
                case 5:
                    str = "Five";
                    break;
                case 6:
                    str = "Six";
                    break;
                case 7:
                    str = "Seven";
                    break;
                case 8:
                    str = "Eight";
                    break;
                case 9:
                    str = "Nine";
                    break;
            }
            if (!result[num-1].empty()) {
                if (issame(result[num-1], vector<string>(str))) {
                    continue;
                }
            }
            result[num-1].push_back(str);
        }
    }

    vector<string> res;
    for (int i = 0; i < 10; ++i) {
        res.insert(res.end(), result[i].begin(), result[i].end());
    }

    return res;
}