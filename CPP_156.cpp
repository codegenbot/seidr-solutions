string int_to_mini_roman(int number) {
    vector<string> roman = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    vector<int> place = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    string romanNumeral;
    for(int i=0; i<place.size();i++){
        while(number >= place[i]){
            number -= place[i];
            romanNumeral += roman[i];
        }
    }
    return romanNumeral;
}