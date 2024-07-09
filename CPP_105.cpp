#include <vector>
#include <algorithm>
using namespace std;

vector<string> by_length(vector<int> arr) {
    vector<string> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(to_string(num));
        }
    }
    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());
    vector<string> result;
    for (string str : numbers) {
        string result_str = "";
        switch (stoi(str)) {
            case 1:
                result_str = "One";
                break;
            case 2:
                result_str = "Two";
                break;
            case 3:
                result_str = "Three";
                break;
            case 4:
                result_str = "Four";
                break;
            case 5:
                result_str = "Five";
                break;
            case 6:
                result_str = "Six";
                break;
            case 7:
                result_str = "Seven";
                break;
            case 8:
                result_str = "Eight";
                break;
            case 9:
                result_str = "Nine";
                break;
        }
        result.push_back(result_str);
    }
    return result;
}