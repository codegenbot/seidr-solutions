#include <string>
using namespace std;

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
        string str = to_string(num);
        if (!str.empty()) {
            result.push_back({"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"}[stoi(str) - 1]);
        }
    }

    return result;
}