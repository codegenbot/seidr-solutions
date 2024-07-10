map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> rev_num_map;
for(auto const &pair : num_map){
    rev_num_map[pair.second] = pair.first;
}

vector<int> nums;
string num_str = "";
for(char& c : numbers){
    if(c == ' '){
        nums.push_back(num_map[num_str]);
        num_str = "";
    }
    else{
        num_str += c;
    }
}
nums.push_back(num_map[num_str]);

sort(nums.begin(), nums.end());

string result = "";
for(int num : nums){
    result += rev_num_map[num] + " ";
}
result.pop_back();

return result;
}