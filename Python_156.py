def int_to_mini_roman(number):
    roman = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
    mini_roman = ""

    for i in range(1000, 0, -1):
        while number >= i:
            number -= i
            mini_roman += list(roman.keys())[list(roman.values()).index(i)].lower()
    return mini_roman