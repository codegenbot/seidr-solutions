def int_to_mini_roman(number):
    roman = ""
    values = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
    sybols = ["M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"]

    for value, symbol in zip(values, sybols):
        while number >= value:
            roman += symbol
            number -= value

    return roman.lower()