string sort_numbers(string numbers){
    map<string,int> numMap;
    for(int i=0; i<10; i++){
        string str = (i==0)?"zero":(char)(48+i+48);
        numMap[str] = i;
    }
    vector<string> nums;
    string temp;
    for(int i=0; i<numbers.length(); i++){
        if(numbers[i]==' '){
            continue;
        }
        temp="";
        while(i<numbers.length() && numbers[i]!=' '){
            temp+=numbers[i];
            i++;
        }
        nums.push_back(temp);
    }

    sort(nums.begin(),nums.end(),[&numMap](string a, string b) {
        return numMap[a] < numMap[b];
    });

    string result = "";
    for(auto &n : nums){
        result += n + " ";
    }
    return result.substr(0,result.length()-1);
}