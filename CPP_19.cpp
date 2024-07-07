map<string,int> numMap = {{"zero",0}, {"one",1}, {"two",2}, {"three",3}, 
                          {"four",4}, {"five",5}, {"six",6}, {"seven",7},
                          {"eight",8}, {"nine",9}};

vector<string> nums;
string temp;

for (char c : numbers) {
    if (c == ' ') {
        nums.push_back(temp);
        temp = "";
    } else {
        temp += c;
    }
}
nums.push_back(temp);

sort(nums.begin(), nums.end());

string result = "";
for (const string& num : nums) {
    for (auto it = numMap.begin(); it != numMap.end(); ++it) {
        if (num == it->first) {
            result += num + " ";
            break;
        }
    }
}
return result.substr(0, result.size() - 1);