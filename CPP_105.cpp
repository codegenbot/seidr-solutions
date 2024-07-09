```cpp
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<bool> by_length(vector<int> arr) {
    vector<bool> result;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            bool same = false;
            for (string name : {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"}) {
                if (stoi(name.substr(0, 3)) == num) {
                    same = true;
                    break;
                }
            }
            result.push_back(same);
        } else {
            result.push_back(false);
        }
    }
    return result;
}