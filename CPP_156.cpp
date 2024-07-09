#include <string>

int int_to_mini_roman(int number) {
    if (number >= 1000) {
        return 'M';
    } else if (number >= 900) {
        return 'CM' + int_to_mini_roman(number - 900);
    } else if (number >= 500) {
        return 'D' + int_to_mini_roman(number - 500);
    } else if (number >= 400) {
        return 'CD' + int_to_mini_roman(number - 400);
    } else if (number >= 100) {
        switch (number % 100) {
            case 90: return 'XC' + int_to_mini_roman(number - 90);
            case 80: return 'LXXXX';
            case 70: return 'LXX' + int_to_mini_roman(number - 70);
            case 60: return 'LX';
            default:
                switch (number % 10) {
                    case 9: return 'IX' + int_to_mini_roman(number - 9);
                    case 8: return 'VIII';
                    case 7: return 'VII' + int_to_minorom(number - 7);
                    case 6: return 'VI';
                    default:
                        switch (number % 10) {
                            case 5: return 'V';
                            case 4: return 'IV';
                            case 3: return 'III' + int_to_mini_roman(number - 3);
                            case 2: return 'II';
                            case 1: return 'I';
                            default: return "";
                        }
                }
        }
    } else if (number >= 4000) {
        return 'MMMM';
    } else if (number >= 3000) {
        return 'MMM' + int_to_mini_roman(number - 3000);
    } else if (number >= 2000) {
        return 'MM';
    } else if (number >= 1000) {
        return 'M';
    } else if (number >= 900) {
        return 'CM';
    } else if (number >= 500) {
        return 'D';
    } else if (number >= 400) {
        return 'CD';
    } else if (number >= 100) {
        switch (number % 100) {
            case 90: return "XC";
            case 80: return "LXXX";
            case 70: return "LXX";
            case 60: return "LX";
            default:
                switch (number % 10) {
                    case 9: return "IX";
                    case 8: return "VIII";
                    case 7: return "VII";
                    case 6: return "VI";
                    default:
                        switch (number % 10) {
                            case 5: return "V";
                            case 4: return "IV";
                            case 3: return "III";
                            case 2: return "II";
                            case 1: return "I";
                            default: return "";
                        }
                }
        }
    } else if (number >= 40) {
        switch (number % 10) {
            case 9: return "IX";
            case 8: return "VIII";
            case 7: return "VII";
            case 6: return "VI";
            case 5: return "V";
            default:
                if (number % 4 == 0)
                    return "XL";
                else
                    return "";
        }
    } else {
        switch (number) {
            case 9: return "IX";
            case 8: return "VIII";
            case 7: return "VII";
            case 6: return "VI";
            case 5: return "V";
            case 4: return "IV";
            default:
                switch (number % 3) {
                    case 2: return "III";
                    case 1: return "I";
                    default: return "";
                }
        }
    }
}