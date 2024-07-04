#include<vector>
#include<algorithm>

string sort_numbers(string numbers){
    map<string, int> str_to_num = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    map<int, string> num_to_str = {{0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}};
    
    vector<int> nums;
    string word = "";
    for(char c : numbers){
        if(c == ' '){
            if(!word.empty()){
                nums.push_back(str_to_num[word]);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        nums.push_back(str_to_num[word]);
    }
    
    sort(nums.begin(), nums.end());
    
    string result = "";
    for(int i = 0; i < nums.size(); i++){
        if(i > 0) result += " ";
        result += num_to_str[nums[i]];
    }
    
    return result;
}