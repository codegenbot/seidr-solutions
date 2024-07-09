#include <string>

string int_to_mini_roman(int num) {
    if(num<1) return "Error: Input should be a positive integer";
    string miniRoman;
    while(num>0){
        if(num>=1000) {miniRoman += "M"; num -= 1000;}
        else if(num>=900) {miniRoman += "CM"; num -= 900;}
        else if(num>=500) {miniRoman += "D"; num -= 500;}
        else if(num>=400) {miniRoman += "CD"; num -= 400;}
        else if(num>=100) {miniRoman += "C"; num -= 100;}
        else if(num>=90) {miniRoman += "XC"; num -= 90;}
        else if(num>=50) {miniRoman += "L"; num -= 50;}
        else if(num>=40) {miniRoman += "XL"; num -= 40;}
        else if(num>=10) {miniRoman += "X"; num -= 10;}
        else if(num>=9) {miniRoman += "IX"; num -= 9;}
        else if(num>=5) {miniRoman += "V"; num -= 5;}
        else if(num>=4) {miniRoman += "IV"; num -= 4;}
        else{ miniRoman += "I"; num--;}
    }
    return miniRoman;
}