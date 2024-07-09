```cpp
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> by_length(vector<int> arr) {
    vector<vector<string>> result;
    for (int i = 0; i < 9; i++) {
        vector<string> temp;
        for (int num : arr) {
            if (num >= i + 1 && num <= i + 9) {
                switch (num) {
                    case i + 1:
                        temp.push_back("One");
                        break;
                    case i + 2:
                        temp.push_back("Two");
                        break;
                    case i + 3:
                        temp.push_back("Three");
                        break;
                    case i + 4:
                        temp.push_back("Four");
                        break;
                    case i + 5:
                        temp.push_back("Five");
                        break;
                    case i + 6:
                        temp.push_back("Six");
                        break;
                    case i + 7:
                        temp.push_back("Seven");
                        break;
                    case i + 8:
                        temp.push_back("Eight");
                        break;
                    case i + 9:
                        temp.push_back("Nine");
                        break;
                }
            }
        }
        sort(temp.begin(), temp.end());
        reverse(temp.begin(), temp.end());
        result.push_back(temp);
    }
    return result;
}