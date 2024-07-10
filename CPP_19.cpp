string sort_numbers(string numbers){
    map<string,int> numMap;
    for(int i=0; i<10; i++){
        string num = (i==0)?"zero":((i==1)?"one":((i==2)?"two":((i==3)?"three":((i==4)?"four":((i==5)?"five":((i==6)?"six":((i==7)?"seven":((i==8)?"eight":"nine"))))))));
        numMap[num] = i;
    }
    vector<string> nums;
    for(int i=0; i<numbers.size(); i++){
        string s = "";
        while(i < numbers.size() && numbers[i] != ' '){
            s += numbers[i];
            i++;
        }
        i--;
        if(numMap.count(s)){
            nums.push_back(s);
        }else{
            i++;
        }
    }
    sort(nums.begin(),nums.end());
    string result = "";
    for(int i=0; i<nums.size(); i++){
        result += nums[i];
        if(i < nums.size()-1){
            result += " ";
        }
    }
    return result;
}