#include <string>
std::string int_to_mini_roman(int num) {
    if (num >= 1000) {
        string roman = "M";
        num -= 1000;
        while (num >= 100) {
            roman += "C";
            num -= 100;
            if (num >= 50) {
                roman += "L";
                num -= 50;
            } else if (num >= 10) {
                roman += "X";
                num -= 10;
                if (num >= 5) {
                    roman += "V";
                    num -= 5;
                } else if (num > 0) {
                    roman += "I";
                    num--;
                }
            } else {
                roman += "I";
            }
        }
        while (num >= 1) {
            if (num == 4) {
                roman += "IV";
                num = 0;
            } else if (num == 5) {
                roman += "V";
                num = 0;
            } else if (num == 9) {
                roman += "IX";
                num = 0;
            } else {
                roman += "I";
                num--;
            }
        }
        return roman;
    } else if (num >= 500) {
        string roman = "D";
        num -= 500;
        while (num >= 100) {
            roman += "C";
            num -= 100;
            if (num >= 50) {
                roman += "L";
                num -= 50;
            } else if (num >= 10) {
                roman += "X";
                num -= 10;
                if (num >= 5) {
                    roman += "V";
                    num -= 5;
                } else if (num > 0) {
                    roman += "I";
                    num--;
                }
            } else {
                roman += "I";
            }
        }
        while (num >= 1) {
            if (num == 4) {
                roman += "IV";
                num = 0;
            } else if (num == 5) {
                roman += "V";
                num = 0;
            } else if (num == 9) {
                roman += "IX";
                num = 0;
            } else {
                roman += "I";
                num--;
            }
        }
        return roman;
    } else if (num >= 100) {
        string roman = "";
        while (num >= 100) {
            roman += "C";
            num -= 100;
            if (num >= 50) {
                roman += "L";
                num -= 50;
            } else if (num >= 10) {
                roman += "X";
                num -= 10;
                if (num >= 5) {
                    roman += "V";
                    num -= 5;
                } else if (num > 0) {
                    roman += "I";
                    num--;
                }
            } else {
                roman += "I";
            }
        }
        while (num >= 1) {
            if (num == 4) {
                roman += "IV";
                num = 0;
            } else if (num == 5) {
                roman += "V";
                num = 0;
            } else if (num == 9) {
                roman += "IX";
                num = 0;
            } else {
                roman += "I";
                num--;
            }
        }
        return roman;
    } else if (num >= 50) {
        string roman = "L";
        num -= 50;
        while (num >= 10) {
            roman += "X";
            num -= 10;
            if (num >= 5) {
                roman += "V";
                num -= 5;
            } else if (num > 0) {
                roman += "I";
                num--;
            }
        }
        while (num >= 1) {
            if (num == 4) {
                roman += "IV";
                num = 0;
            } else if (num == 5) {
                roman += "V";
                num = 0;
            } else if (num == 9) {
                roman += "IX";
                num = 0;
            } else {
                roman += "I";
                num--;
            }
        }
        return roman;
    } else if (num >= 10) {
        string roman = "";
        while (num >= 10) {
            roman += "X";
            num -= 10;
            if (num >= 5) {
                roman += "V";
                num -= 5;
            } else if (num > 0) {
                roman += "I";
                num--;
            }
        }
        while (num >= 1) {
            if (num == 4) {
                roman += "IV";
                num = 0;
            } else if (num == 5) {
                roman += "V";
                num = 0;
            } else if (num == 9) {
                roman += "IX";
                num = 0;
            } else {
                roman += "I";
                num--;
            }
        }
        return roman;
    } else if (num >= 5) {
        string roman = "V";
        num -= 5;
        while (num > 0) {
            roman += "I";
            num--;
        }
        return roman;
    } else {
        string roman = "";
        while (num > 0) {
            roman += "I";
            num--;
        }
        return roman;
    }
}