#include <vector>
#include <algorithm>

string sort_numbers_with_map(string numbers) {
    map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    map<int, string> reverse_map;

    for (auto const &pair : number_map) {
        reverse_map[pair.second] = pair.first;
    }

    vector<int> sorted_numbers;
    istringstream iss(numbers);
    string token;
    while (iss >> token) {
        sorted_numbers.push_back(number_map[token]);
    }

    sort(sorted_numbers.begin(), sorted_numbers.end());

    string result;
    for (int num : sorted_numbers) {
        result += reverse_map[num] + " ";
    }

    return result;
}

int main() {
    string numbers = "zero one two three four five";
    cout << sort_numbers_with_map(numbers) << endl;
    return 0;
}