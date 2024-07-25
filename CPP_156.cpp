```cpp
#include<string>

std::string int_to_mini_roman(int num) {
    std::string roman;
    switch(num/1000) {
        case 1:
            roman = "M";
            break;
        default:
            roman = "";
            for(int i=2000; i>num; --i) {
                if(i/100 == 2) roman = "CM" + roman;
                else if(i/100 == 3) roman = "CCC" + roman;
                else if(i/100 > 3 && i/100 <1) roman = "D" + roman;
                break;
            }
            for(int i=10; i>num%10; --i) {
                if(i/10 == 2) roman = "X" + roman;
                else if(i/10 == 3) roman = "XXX" + roman;
                else if(i/10 > 3 && i/10 <1) roman = "L" + roman;
            }
            for(int i=1; i>num%10; --i) {
                if(num%10==2) roman = "II" + roman;
                else if(num%10==3) roman = "III" + roman;
                else if(num%10>3 && num%10<1) roman = "IV" + roman;
            }
    }
    return roman;
}
assert(int_to_mini_roman(1000) == "M");