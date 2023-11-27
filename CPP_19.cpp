#include <stdio.h>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> number_map;
    number_map["zero"]  = 0;
    number_map["one"]   = 1;
    number_map["two"]   = 2;
    number_map["three"] = 3;
    number_map["four"]  = 4;
    number_map["five"]  = 5;
    number_map["six"]   = 6;
    number_map["seven"] = 7;
    number_map["eight"] = 8;
    number_map["nine"]  = 9;

    string result;
    string temp;
    
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            result += temp + " ";
            temp = "";
        } else {
            temp += numbers[i];
        }
    }
    
    result += temp;
    
    vector<string> number_list;
    temp = "";
    
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            number_list.push_back(temp);
            temp = "";
        } else {
            temp += result[i];
        }
    }
    
    number_list.push_back(temp);
    sort(number_list.begin(), number_list.end(), [&](const string& a, const string& b) {
        return number_map[a] < number_map[b];
    });
    
    result = "";
    
    for (int i = 0; i < number_list.size(); i++) {
        result += number_list[i] + " ";
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    string input;
    getline(cin, input);
    
    string result = sort_numbers(input);
    printf("%s\n", result.c_str());

    return 0;
}