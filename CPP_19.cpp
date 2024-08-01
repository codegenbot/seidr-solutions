#include <string>
#include <map>
#include <cassert>

using namespace std;

map<string, int> number_map = {
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

string sort_numbers(string numbers) {
    string result = "";
    map<int, string> sorted_numbers;
    
    size_t start = 0, end = numbers.find(" ");
    while (end != string::npos) {
        string num_str = numbers.substr(start, end - start);
        sorted_numbers[number_map[num_str]] = num_str;
        start = end + 1;
        end = numbers.find(" ", start);
    }
    
    string num_str = numbers.substr(start);
    sorted_numbers[number_map[num_str]] = num_str;
    
    for (const auto& pair : sorted_numbers) {
        result += pair.second + " ";
    }
    
    result.pop_back(); // Remove the extra space at the end
    return result;
}

void run_code() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
}

int main() {
    run_code();
    return 0;
}