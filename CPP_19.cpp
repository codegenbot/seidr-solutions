/*
Input is a space-delimited string of numberals from "zero" to "nine".
Valid choices are "zero", "one", 'two", 'three", "four", "five", 'six", 'seven", "eight" and "nine".
Return the string with numbers sorted from smallest to largest
>>> sort_numbers('three one five")
"one three five"
*/
#include<stdio.h>
#include<string>
#include<map>
using namespace std;
string sort_numbers(string numbers){
    map<string, int> m;
    m["zero"] = 0;
    m["one"] = 1;
    m["two"] = 2;
    m["three"] = 3;
    m["four"] = 4;
    m["five"] = 5;
    m["six"] = 6;
    m["seven"] = 7;
    m["eight"] = 8;
    m["nine"] = 9;

    int num[10];
    int count = 0;
    int i = 0;
    string s = "";
    while(i < numbers.size()){
        if(numbers[i] == ' '){
            num[count++] = m[s];
            s = "";
        }
        else{
            s += numbers[i];
        }
        i++;
    }
    num[count++] = m[s];
    sort(num, num+count);
    map<int, string> n;
    n[0] = "zero";
    n[1] = "one";
    n[2] = "two";
    n[3] = "three";
    n[4] = "four";
    n[5] = "five";
    n[6] = "six";
    n[7] = "seven";
    n[8] = "eight";
    n[9] = "nine";
    string result = "";
    for(int i = 0; i < count; i++){
        result += n[num[i]];
        if(i < count-1){
            result += " ";
        }
    }
    return result;
}
