
def int_to_mini_roman(number):
    """
    Given a positive integer, obtain its roman numeral equivalent as a string,
    and return it in lowercase.
    Restrictions: 1 <= num <= 1000

    Examples:
    >>> int_to_mini_roman(19) == 'xix'
    >>> int_to_mini_roman(152) == 'clii'
    if number == 1:
        return 'i'
    elif number == 2:
        return 'ii'
    elif number == 3:
        return 'iii'
    elif number == 4:
        return 'iv'
    elif number == 5:
        return 'v'
    elif number == 6:
        return 'vi'
    elif number == 7:
        return 'vii'
    elif number == 8:
        return 'viii'
    elif number == 9:
        return 'ix'
    elif number == 10:
        return 'x'
    elif number == 11:
        return 'xi'
    elif number == 12:
        return 'xii'
    elif number == 13:
        return 'xiii'
    elif number == 14:
        return 'xiv'
    elif number == 15:
        return 'xv'
    elif number == 16:
        return 'xvi'
    elif number == 17:
        return 'xvii'
    elif number == 18:
        return 'xviii'
    elif number == 19:
        return 'xix'
    elif number == 20:
        return 'xx'
    elif number == 21:
        return 'xxi'
    elif number == 22:
        return 'xxii'
    elif number == 23:
        return 'xxiii'
    elif number == 24:
        return 'xxiv'
    elif number == 25:
        return 'xxv'
    elif number == 26:
        return 'xxvi'
    elif number == 27:
        return 'xxvii'
    elif number == 28:
        return 'xxviii'
    elif number == 29:
        return 'xxix'
    elif number == 30:
        return 'xxx'
    elif number == 31:
        return 'xxxi'
    elif number == 32:
        return 'xxxii'
    elif number == 33:
        return 'xxxiii'
    elif number == 34:
        return 'xxxiv'
    elif number == 35:
        return 'xxxv'
    elif number == 36:
        return 'xxxvi'
    elif number == 37:
        return 'xxxvii'
    elif number == 38:
        return 'xxxviii'
    elif number == 39:
        return 'xxxix'
    elif number == 40:
        return 'xl'
    elif number == 41:
        return 'xli'
    elif number == 42:
        return 'xlii'
    elif number == 43:
        return 'xliii'
    elif number == 44:
        return 'xliv'
    elif number == 45:
        return 'xlv'
    elif number == 46:
        return 'xlvi'
    elif number == 47:
        return 'xlvii'
    elif number == 48:
        return 'xlviii'
    elif number == 49:
        return 'xlix'
    elif number == 50:
        return 'l'
    elif number == 51:
        return 'li'
    elif number == 52:
        return 'lii'
    elif number == 53:
        return 'liii'
    elif number == 54:
        return 'liv'
    elif number == 55:
        return 'lv'
    elif number == 56:
        return 'lvi'
    elif number == 57:
        return 'lvii'
    elif number == 58:
        return 'lviii'
    elif number == 59:
        return 'lix'
    elif number == 60:
        return 'lx'
    elif number == 61:
        return 'lxi'
    elif number == 62:
        return 'lxii'
    elif number == 63:
        return 'lxiii'
    elif number == 64:
        return 'lxiv'
    elif number == 65:
        return 'lxv'
    elif number == 66:
        return 'lxvi'
    elif number == 67:
        return 'lxvii'
    elif number == 68:
        return 'lxviii'
    elif number == 69:
        return 'lxix'
    elif number == 70:
        return 'lxx'
    elif number == 71:
        return 'lxxi'
    elif number == 72:
        return 'lxxii'
    elif number == 73:
        return 'lxxiii'
    elif number == 74:
        return 'lxxiv'
    elif number == 75:
        return 'lxxv'
    elif number == 76:
        return 'lxxvi'
    elif number == 77:
        return 'lxxvii'
    elif number == 78:
        return 'lxxviii'
    elif number == 79:
        return 'lxxix'
    elif number == 80:
        return 'lxxx'
    elif number == 81:
        return 'lxxxi'
    elif number == 82:
        return 'lxxxii'
    elif number == 83:
        return 'lxxxiii'
    elif number == 84:
        return 'lxxxiv'
    elif number == 85:
        return 'lxxxv'
    elif number == 86:
        return 'lxxxvi'
    elif number == 87:
        return 'lxxxvii'
    elif number == 88:
        return 'lxxxviii'
    elif number == 89:
        return 'lxxxix'
    elif number == 90:
        return 'xc'
    elif number == 91:
        return 'xci'
    elif number == 92:
        return 'xcii'
    elif number == 93:
        return 'xciii'
    elif number == 94:
        return 'xciv'
    elif number == 95:
        return 'xcv'
    elif number == 96:
        return 'xcvi'
    elif number == 97:
        return 'xcvii'
    elif number == 98:
        return 'xcviii'
    elif number == 99:
        return 'xcix'
    elif number == 100:
        return 'c'
    elif number == 101:
        return 'ci'
    elif number == 102:
        return 'cii'
    elif number == 103:
        return 'ciii'
    elif number == 104:
        return 'civ'
    elif number == 105:
        return 'cv'
    elif number == 106:
        return 'cvi'
    elif number == 107:
        return 'cvii'
    elif number == 108:
        return 'cviii'
    elif number == 109:
        return 'cix'
    elif number == 110:
        return 'cx'
    elif number == 111:
        return 'cxi'
    elif number == 112:
        return 'cxii'
    elif number == 113:
        return 'cxiii'
    elif number == 114:
        return 'cxiv'
    elif number == 115:
        return 'cxv'
    elif number == 116:
        return 'cxvi'
    elif number == 117:
        return 'cxvii'
    elif number == 118:
        return 'c
    >>> int_to_mini_roman(426) == 'cdxxvi'
    """
