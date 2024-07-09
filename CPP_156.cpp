#include <string>

string int_to_mini_roman(int num) {
    string miniRoman = "";
    
    if(num > 3999) {
        return "Out of range";
    }
    
    else if(num >= 3000) {
        miniRoman += "MMM";
        num -= 3000;
    }
    
    if(num >= 1000) {
        miniRoman += "M";
        num -= 1000;
    }
    
    for(int i = 0; i < num / 500; i++) {
        miniRoman += "D";
        num -= 500;
    }
    
    if(num >= 100) {
        for(int i = 0; i < (num/10)%10; i++) {
            miniRoman += "L";
            num -= 50;
        }
    }
    
    for(int i = 0; i < num; i++) {
        switch(num % 10) {
            case 1: 
                miniRoman += "I"; 
                break;
            case 2:
                miniRoman += "II";
                break;
            case 3:
                miniRoman += "III";
                break;
            case 4:
                miniRoman += "IV";
                break;
            case 5:
                miniRoman += "V";
                break;
            case 6: 
                miniRoman += "VI"; 
                break;
            case 7:
                miniRoman += "VII";
                break;
            case 8:
                miniRoman += "VIII";
                break;
            case 9:
                miniRoman += "IX";
                break; 
        }
        
        num /= 10;
    }
    
    return miniRoman;
}