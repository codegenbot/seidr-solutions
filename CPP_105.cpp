```cpp
vector<string> by_length(vector<int> arr) {
    vector<string> sortedArr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            string s = "";
            switch (num) {
                case 1:
                    s = "One";
                    break;
                case 2:
                    s = "Two";
                    break;
                case 3:
                    s = "Three";
                    break;
                case 4:
                    s = "Four";
                    break;
                case 5:
                    s = "Five";
                    break;
                case 6:
                    s = "Six";
                    break;
                case 7:
                    s = "Seven";
                    break;
                case 8:
                    s = "Eight";
                    break;
                case 9:
                    s = "Nine";
                    break;
            }
            sortedArr.push_back(s);
        }
    }
    sort(sortedArr.begin(), sortedArr.end());
    return sortedArr;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
}