/*
Input is a space-delimited string of numberals from "zero" to "nine".
Valid choices are "zero", "one", 'two", 'three", "four", "five", 'six", 'seven", "eight" and "nine".
Return the string with numbers sorted from smallest to largest
>>> sort_numbers('three one five")
"one three five"
*/
#include<stdio.h>
#include<string.h>
#include<map>
#include <iostream>
#include <ostream> 
using namespace std;
string sort_numbers(string numbers){
    map<string, int> input;
    input["zero"] = 0;
    input["one"] = 1;
    input["two"] = 2;
    input["three"] = 3;
    input["four"] = 4;
    input["five"] = 5;
    input["six"] = 6;
    input["seven"] = 7;
    input["eight"] = 8;
    input["nine"] = 9;
    map<int, string> output;
    output[0] = "zero";
    output[1] = "one";
    output[2] = "two";
    output[3] = "three";
    output[4] = "four";
    output[5] = "five";
    output[6] = "six";
    output[7] = "seven";
    output[8] = "eight";
    output[9] = "nine";
    int num[100];
    int i = 0;
    char *p = strtok(numbers, " ");
    while(p != NULL){
        num[i++] = input[p];
        p = strtok(NULL, " ");
    }
    for(int j = 0; j < i; j++){
        for(int k = j + 1; k < i; k++){
            if(num[j] > num[k]){
                int tmp = num[j];
                num[j] = num[k];
                num[k] = tmp;
            }
        }
    }
    string res = "";
    for(int j = 0; j < i; j++){
        res += output[num[j]];
        if(j != i - 1)
            res += " ";
    }
    return res;
}
int main(){
    string s;
    cin >> s;
    cout << sort_numbers(s) << endl;
    return 0;
}
