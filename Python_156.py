def int_to_mini_roman(number):
    roman = ""
    roman_dict = {
        "M": 1000,
        "CM": 900,
        "D": 500,
        "CD": 400,
        "C": 100,
        "XC": 90,
        "L": 50,
        "XL": 40,
        "X": 10,
        "IX": 9,
        "V": 5,
        "IV": 4,
        "I": 1,
    }
    for key in sorted(roman_dict.keys(), reverse=True):
        while number >= roman_dict[key]:
            number -= roman_dict[key]
            roman += key
    return roman.lower()