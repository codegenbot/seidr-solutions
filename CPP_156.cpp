string int_to_mini_roman(int number) {
    string roman[7] = {"", "I", "IV", "V", "IX", "X", "XL"};
    vector<string> ones(3);
    for (int i = 0; i < 3; i++) {
        if (number >= 1000) {
            number -= 1000;
            ones[i] = roman[6];
        } else if (number >= 900) {
            number -= 900;
            ones[i] = "CM";
        } else if (number >= 500) {
            number -= 500;
            ones[i] = "D";
        } else {
            for (int j = 0; j < 3; j++) {
                if (number >= 400) {
                    number -= 400;
                    ones[i] = roman[4];
                    break;
                } else if (number >= 100) {
                    number -= 100;
                    ones[i] = "C";
                    break;
                } else if (number >= 90) {
                    number -= 90;
                    ones[i] = "XC";
                    break;
                } else if (number >= 50) {
                    number -= 50;
                    ones[i] = "L";
                    break;
                } else {
                    for (int k = 0; k < 3; k++) {
                        if (number >= 40) {
                            number -= 40;
                            ones[i] = roman[4];
                            ones.insert(ones.begin(), roman[k]);
                            break;
                        } else if (number >= 10) {
                            number -= 10;
                            ones[i] = "X";
                            break;
                        } else if (number >= 9) {
                            number -= 9;
                            ones[i] = "IX";
                            break;
                        } else if (number >= 5) {
                            number -= 5;
                            ones[i] = "V";
                            break;
                        } else {
                            for (int l = 0; l < 3; l++) {
                                if (number >= 4) {
                                    number -= 4;
                                    ones[i] = roman[1];
                                    ones.insert(ones.begin(), roman[l]);
                                    break;
                                } else if (number >= 1) {
                                    number -= 1;
                                    ones[i] = "I";
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    string result;
    for (int i = 0; i < 3; i++) {
        result += ones[i];
    }

    return result;
}