vector<int> interspersed;
    if(numbers.empty()){
        return interspersed;
    }
    interspersed.push_back(numbers[0]);
    for(int i=1; i<numbers.size(); i++){
        interspersed.push_back(delimeter);
        interspersed.push_back(numbers[i]);
    }
    return interspersed;