#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    int arr[] = {9, 4, 8};
    vector<vector<string>> result = by_length({arr[0], arr[1], arr[2]});
    assert(issame(result, {{ "Nine", "Eight", "Four" }}));
    return 0;
}

vector<vector<string>> by_length(vector<int> arr) {
    vector<string> num;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            switch (i) {
                case 1:
                    num.push_back("One");
                    break;
                case 2:
                    num.push_back("Two");
                    break;
                case 3:
                    num.push_back("Three");
                    break;
                case 4:
                    num.push_back("Four");
                    break;
                case 5:
                    num.push_back("Five");
                    break;
                case 6:
                    num.push_back("Six");
                    break;
                case 7:
                    num.push_back("Seven");
                    break;
                case 8:
                    num.push_back("Eight");
                    break;
                case 9:
                    num.push_back("Nine");
                    break;
            }
        }
    }

    vector<vector<string>> result = {num};
    return result;
}