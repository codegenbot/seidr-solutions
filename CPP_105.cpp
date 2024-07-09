#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& input1, const std::vector<std::string>& input2) {
    if (input1.size() != input2.size())
        return false;
    
    for (int i = 0; i < input1.size(); ++i)
        if (input1[i] != input2[i])
            return false;
    
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<int> numbers;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            numbers.push_back(i);
        }
    }
    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());
    vector<string> result;
    for (int i : numbers) {
        switch (i) {
            case 1:
                result.push_back("One");
                break;
            case 2:
                result.push_back("Two");
                break;
            case 3:
                result.push_back("Three");
                break;
            case 4:
                result.push_back("Four");
                break;
            case 5:
                result.push_back("Five");
                break;
            case 6:
                result.push_back("Six");
                break;
            case 7:
                result.push_back("Seven");
                break;
            case 8:
                result.push_back("Eight");
                break;
            case 9:
                result.push_back("Nine");
                break;
        }
    }
    return result;
}

int main() {
    vector<string> test = by_length({9, 4, 8});
    bool same = issame(test , {"Nine", "Four", "Eight"});
    if (same) {
        cout << "The words are the same." << endl;
    } else {
        cout << "The words are not the same." << endl;
    }
    return 0;
}