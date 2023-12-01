string sort_numbers(string numbers){
    map<string, int> numMap;
    numMap["zero"] = 0;
    numMap["one"] = 1;
    numMap["two"] = 2;
    numMap["three"] = 3;
    numMap["four"] = 4;
    numMap["five"] = 5;
    numMap["six"] = 6;
    numMap["seven"] = 7;
    numMap["eight"] = 8;
    numMap["nine"] = 9;
    
    vector<int> numList;
    string temp;
    for(int i = 0; i < numbers.length(); i++){
        if(numbers[i] == ' '){
            numList.push_back(numMap[temp]);
            temp = "";
        }
        else{
            temp += numbers[i];
        }
    }
    numList.push_back(numMap[temp]);
    
    sort(numList.begin(), numList.end());
    
    string result = "";
    for(int i = 0; i < numList.size(); i++){
        for(auto it : numMap){
            if(it.second == numList[i]){
                result += it.first + " ";
                break;
            }
        }
    }
    
    return result;
}