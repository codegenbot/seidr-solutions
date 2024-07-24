map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
map<int, string> rev_map;
for(auto pair : num_map){
    rev_map[pair.second] = pair.first;
}

vector<int> sorted_nums;
string word;
istringstream iss(numbers);
while(iss >> word){
    sorted_nums.push_back(num_map[word]);
}
sort(sorted_nums.begin(), sorted_nums.end());

string result;
for(auto num : sorted_nums){
    result += rev_map[num] + " ";
}
return result;