#include <vector>
#include <string>

bool issame(vector<string> a, vector<string>b) {
    return a == b;
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            string s = "";
            switch (i) {
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
            result.push_back(s);
        }
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    assert (issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
    // ...
}