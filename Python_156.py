def int_to_mini_roman(number):
    roman_numerals = {
        1: "i",
        4: "iv",
        5: "v",
        9: "ix",
        10: "x",
        40: "xl",
        50: "l",
        90: "xc",
        100: "c",
        400: "cd",
        500: "d",
        900: "cm",
        1000: "m",
    }
    roman_string = ""
    while number > 0:
        for value, numeral in roman_numerals.items():
            if number >= value:
                number -= value
                roman_string += numeral
                break
    return roman_string.lower()