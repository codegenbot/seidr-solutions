def int_to_mini_roman(number):
    roman = ["M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"]
    values = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
    roman_numeral = ""

    for i in range(len(values)):
        while number >= values[i]:
            number -= values[i]
            roman_numeral += roman[i]

    return roman_numeral.lower()