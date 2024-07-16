#include <iostream>
#include <map>
#include <algorithm> 

using namespace std;

string sort_numbers(string numbers) {
    map<string, int> num_map = {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9}
    };

    vector<string> num_vector;
    size_t pos = 0;
    while ((pos = numbers.find(' ')) != string::npos) {
        string token = numbers.substr(0, pos);
        num_vector.push_back(token);
        numbers.erase(0, pos + 1);
    }
    num_vector.push_back(numbers);

    sort(num_vector.begin(), num_vector.end(), [&](const string &a, const string &b) {
        return num_map[a] < num_map[b];
    });

    string sorted_numbers;
    for (const auto &num : num_vector) {
        sorted_numbers += num + " ";
    }
    sorted_numbers.pop_back(); 

    return sorted_numbers;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");

    return 0;
}