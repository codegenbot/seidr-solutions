#include <vector>
#include <algorithm>

bool issame(vector<string> vec1, vector<string> vec2) {
    if (vec1.size() != vec2.size()) return false;
    for (int i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<int> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(num);
        }
    }

    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());

    vector<string> result;
    for (int num : numbers) {
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
        result.push_back(str);
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<string> output = by_length(arr);

    bool same = issame(output, {"One", "Four", "Nine", "Three"});
    if (same) {
        cout << "The vectors are the same." << endl;
    } else {
        cout << "The vectors are different." << endl;
    }

    return 0;
}