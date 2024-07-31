#include <map>
#include <string>
using namespace std;

string sort_numbers(string numbers);

map<string, int> numberMap = {
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

string sort_numbers(string numbers){
    string result = "";
    map<int, string> sortedNumbers;
    
    size_t pos = 0;
    while ((pos = numbers.find(" ")) != string::npos) {
        string token = numbers.substr(0, pos);
        sortedNumbers[numberMap[token]] = token;
        numbers.erase(0, pos + 1);
    }
    sortedNumbers[numberMap[numbers]] = numbers;
    
    for (const auto& pair : sortedNumbers) {
        result += pair.second + " ";
    }
    
    return result;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}