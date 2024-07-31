Here is the solution:

```cpp
vector<pair<int, string>> roman = {{1000,"m"},{900,"cm"},{500,"d"},{400,"cd"},{100,"c"},{90,"xc"},
                                     {50,"l"},{40,"xl"},{10,"x"},{9,"ix"},{5,"v"},{4,"iv"},{1,"i"}};

string int_to_mini_roman(int number){
    string result;
    for(auto roman:roman){
        while(number>=roman.first){
            number-=roman.first;
            result+=roman.second;
        }
    }
    return result;
}