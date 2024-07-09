Here is the solution:

```cpp
string sort_numbers(string numbers) {
    map<string,int> numMap = {{"zero",0},{"one",1},{"two",2},{"three",3},{"four",4},
                              {"five",5},{"six",6},{"seven",7},{"eight",8},{"nine",9}};
    vector<string> nums;
    for (char& c : numbers) {
        if (!isdigit(c)) {
            nums.push_back(numMap.begin()->first + (numMap.find(string(1,c))+map<string,int>::iterator::value)->first);
        }
    }
    sort(nums.begin(),nums.end());
    return string("#{" + string(&nums[0]) + "}");