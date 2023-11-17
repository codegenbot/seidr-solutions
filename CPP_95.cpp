/*
Given a map, return true if all keys are strings in lower 
case or all keys are strings in upper case, else return false.
The function should return false is the given map is empty.
Examples:
check_map_case({{"a","apple"}, {"b","banana"}}) should return true.
check_map_case({{"a","apple"}, {"A","banana"}, {"B","banana"}}) should return false.
check_map_case({{"a","apple"}, {"8","banana"}, {"a","apple"}}) should return false.
check_map_case({{"Name","John"}, {"Age","36"}, {"City","Houston"}}) should return false.
check_map_case({{"STATE","NC"}, {"ZIP","12345"} }) should return true.
*/
#include<stdio.h>
#include<string>
#include<map>
using namespace std;
bool check_dict_case(map<string,string> dict){
    map<string,string>::iterator it;
    if(dict.size()==0)
        return false;
    bool upper=true;
    for(it=dict.begin();it!=dict.end();it++){
        if(islower(it->first[0])){
            upper=false;
            break;
        }
    }
    if(upper){
        for(it=dict.begin();it!=dict.end();it++){
            if(islower(it->first[0]))
                return false;
        }
    }
    else{
        for(it=dict.begin();it!=dict.end();it++){
            if(isupper(it->first[0]))
                return false;
        }
    }
    return true;
}
int main(){
    map<string,string> m;
    m.insert(make_pair("a","apple"));
    m.insert(make_pair("b","banana"));
    printf("%d",check_dict_case(m));
    return 0;
}
