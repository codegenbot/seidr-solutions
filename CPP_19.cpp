#include<string>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

string sort_numbers(string numbers){
    map<string,int> numMap = {{"zero",0}, {"one",1}, {"two",2}, {"three",3}, {"four",4},
                              {"five",5}, {"six",6}, {"seven",7}, {"eight",8}, {"nine",9}};
    vector<string> nums;
    string temp;
    for(int i = 0; i < numbers.length(); i++){
        if(numbers[i] == ' '){
            nums.push_back(temp);
            temp = "";
        }else{
            temp += numbers[i];
        }
    }
    nums.push_back(temp);

    std::sort(nums.begin(),nums.end());
    
    string result;
    for(auto &num : nums){
        result += num + " ";
    }
    return result.substr(0,result.length()-1);
}