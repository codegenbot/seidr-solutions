map<char,int> histogram(string test){
    map<char,int> result;
    string temp = "";
    int maxCount = 0;

    for(int i=0; i<test.length(); i++){
        if(test[i] == ' ' || i == test.length() - 1){
            if(temp.length() > 0){
                if(result.find(temp[0]) != result.end()){
                    result[temp[0]]++;
                } else {
                    result[temp[0]] = 1;
                }
                temp = "";
            }
        } else {
            temp += test[i];
        }
    }

    map<char,int> maxMap;

    for(auto it = result.begin(); it != result.end(); it++){
        if(it->second > maxCount){
            maxCount = it->second;
            maxMap.clear();
            maxMap[it->first] = it->second;
        } else if(it->second == maxCount){
            maxMap[it->first] = it->second;
        }
    }

    bool same = false;

    for(auto it = result.begin(); it != result.end(); it++){
        if(maxMap.find(it->first) != maxMap.end() && it->second == maxMap[it->first]){
            same = true;
            break;
        } else {
            same = false;
            break;
        }
    }

    return same;
}