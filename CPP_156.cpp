string int_to_mini_roman(int number){
    vector<pair<int, string>> roman = {{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{1,"I"}};
    string res = "";
    for(auto p : roman){
        while(number >= p.first){
            number -= p.first;
            res += to_string(p.second).substr(0,1);
        }
    }
    return res;
}