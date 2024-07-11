#include<stdio.h>
#include<string>
#include<map>
using namespace std;

string sort_numbers(string numbers){
    map<string,int> numMap = {
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

    string sortedNumbers = "";
    vector<string> nums;
    for(int i = 0; i < numbers.length(); i++){
        if(numbers[i] == ' ')
            continue;
        for(int j = i + 1; j <= numbers.length(); j++){
            if(numbers[j] != ' ' && numbers[j] != '\0')
                break;
            nums.push_back(numbers.substr(i, j - i));
            i = j - 1;
            break;
        }
    }

    sort(nums.begin(), nums.end(), 
         [&numMap](string a, string b) { return numMap[a] < numMap[b];});

    for(int i = 0; i < nums.size(); i++){
        sortedNumbers += nums[i];
        if(i != nums.size() - 1)
            sortedNumbers += ' ';
    }

    return sortedNumbers;
}