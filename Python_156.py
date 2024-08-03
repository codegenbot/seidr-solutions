def int_to_mini_roman(number):
    roman_numerals = {
        1000: "m",
        900: "cm",
        500: "d",
        400: "cd",
        100: "c",
        90: "xc",
        50: "l",
        40: "xl",
        10: "x",
        9: "ix",
        5: "v",
        4: "iv",
        1: "i",
    }
    roman = ""
    for value in sorted(roman_numerals.keys(), reverse=True):
        while number >= value:
            roman += roman_numerals[value]
            number -= value
    return roman.lower()