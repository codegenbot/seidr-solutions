string sort_numbers(string numbers){
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> numVec;
    string temp;
    for(int i = 0; i < numbers.length(); i++){
        if(numbers[i] == ' '){
            continue;
        }
        for(int j = i + 1; j <= numbers.length() && numbers[j] != ' '; j++){
            temp += numbers[j];
        }
        i = j - 1;
        numVec.push_back(temp);
        temp.clear();
    }

    sort(numVec.begin(), numVec.end());
    string result = "";
    for(int i = 0; i < numVec.size(); i++){
        result += numMap.find(numVec[i])->second > 0 ? to_string(numMap.find(numVec[i])->second) : "zero";
        if(i != numVec.size() - 1){
            result += " ";
        }
    }

    return result;
}