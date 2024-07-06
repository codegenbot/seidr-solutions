string int_to_mini_roman(int number) {
    string roman = "";
    int thousands = number / 1000;
    if (thousands > 0) {
        for (int i = 0; i < thousands; i++) {
            roman += "m";
        }
        number %= 1000;
    }

    int hundreds = number / 100;
    if (hundreds > 0) {
        roman += getRomanNumber(hundreds, 100);
        number %= 100;
    }

    int fifties = number / 50;
    if (fifties > 0) {
        roman += "l";
        for (int i = 0; i < fifties - 1; i++) {
            roman += "l";
        }
        number %= 50;
    }

    int tens = number / 10;
    if (tens > 3) {
        roman += getRomanNumber(tens, 10);
        number %= 10;
    } else {
        for (int i = 0; i < tens; i++) {
            roman += "x";
        }
        number %= 10;

        int ones = number / 5;
        if (ones > 3) {
            roman += getRomanNumber(ones, 5);
            number %= 5;
        } else {
            for (int i = 0; i < ones; i++) {
                roman += "v";
            }
            number %= 5;

            int remainder = number % 4;
            if (remainder == 1) {
                roman += "i";
            } else if (remainder ==2) {
                roman += "ii";
            } else if (remainder ==3) {
                roman += "iii";
            }

        }
    }

    return roman;
}

string getRomanNumber(int number, int denominator) {
    switch(number / denominator){
        case 1:
            return "i" + getRomanMultiple(number % denominator);
        case 2:
            return "ii" + getRomanMultiple(number % denominator);
        case 3:
            return "iii" + getRomanMultiple(number % denominator);
        case 4:
            return "iv";
        case 5:
            return "v" + getRomanMultiple(number % 5);
        case 6:
            return "vi" + getRomanMultiple(number % 5);
        case 7:
            return "vii" + getRomanMultiple(number % 5);
        case 8:
            return "viii" + getRomanMultiple(number % 5);
        case 9:
            return "ix";
        default:
            return getRomanNumber(number / denominator, denominator) + getRomanNumber((number / denominator) % 10, 10);
    }
}

string getRomanMultiple(int number) {
    if(number > 3){
        return getRomanNumber(number, 4);
    } else{
        string roman;
        for(int i = 0; i < number; i++){
            roman += "i";
        }
        return roman;
    }
}