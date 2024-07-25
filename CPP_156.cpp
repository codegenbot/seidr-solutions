#include <string>

std::string int_to_mini_roman(int number) {
    std::string result;

    if (number >= 1000) {
        while (number >= 1000) {
            result += "M";
            number -= 1000;
        }
    }

    if (number >= 900) {
        result += "CM";
        number -= 900;
    } else if (number >= 500) {
        while (number >= 500) {
            result += "D";
            number -= 500;
        }
    } else if (number >= 400) {
        while (number >= 400) {
            result += "CD";
            number -= 400;
        }
    }

    if (number >= 100) {
        while (number >= 100) {
            if (number >= 900) {
                result += "CM";
                number -= 900;
            } else if (number >= 500) {
                result += "D";
                number -= 500;
            } else {
                result += "C";
                number -= 100;
            }
        }
    }

    if (number >= 90) {
        while (number >= 90) {
            result += "XC";
            number -= 90;
        }
    } else if (number >= 50) {
        while (number >= 50) {
            if (number >= 400) {
                result += "CD";
                number -= 400;
            } else {
                result += "L";
                number -= 50;
            }
        }
    } else if (number >= 40) {
        while (number >= 40) {
            result += "XL";
            number -= 40;
        }
    }

    if (number >= 10) {
        while (number >= 10) {
            if (number >= 90) {
                result += "XC";
                number -= 90;
            } else if (number >= 50) {
                result += "L";
                number -= 50;
            } else {
                switch (number) {
                    case 9:
                        result += "IX";
                        break;
                    case 8:
                        result += "VIII";
                        break;
                    case 7:
                        result += "VII";
                        break;
                    case 6:
                        result += "VI";
                        break;
                    case 5:
                        result += "V";
                        break;
                    default:
                        switch (number) {
                            case 4:
                                result += "IV";
                                break;
                            case 3:
                                result += "III";
                                break;
                            case 2:
                                result += "II";
                                break;
                            case 1:
                                result += "I";
                                break;
                        }
                }
                number = 0;
            }
        }
    }

    return result;