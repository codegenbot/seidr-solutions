#include<string>
#include<vector>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                 {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                 {"eight", 8}, {"nine", 9}};
    vector<string> num_vec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        temp = "";
        while (i < numbers.length() && numbers[i] != ' ') {
            temp += numbers[i];
            i++;
        }
        num_vec.push_back(temp);
    }

    sort(num_vec.begin(), num_vec.end());

    string result = "";
    for (const auto &num : num_vec) {
        result += num + " ";
    }

    return result;
}