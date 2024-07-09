#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            switch (i) {
                case 1:
                    temp.push_back("One");
                    break;
                case 2:
                    temp.push_back("Two");
                    break;
                case 3:
                    temp.push_back("Three");
                    break;
                case 4:
                    temp.push_back("Four");
                    break;
                case 5:
                    temp.push_back("Five");
                    break;
                case 6:
                    temp.push_back("Six");
                    break;
                case 7:
                    temp.push_back("Seven");
                    break;
                case 8:
                    temp.push_back("Eight");
                    break;
                case 9:
                    temp.push_back("Nine");
                    break;
            }
        }
    }

    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());

    return temp;
}