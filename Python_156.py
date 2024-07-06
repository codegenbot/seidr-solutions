def int_to_mini_roman(number):
    roman_numerals = ["i", "v", "x", "l", "c", "d", "m"]
    roman_values = [1, 5, 10, 50, 100, 500, 1000]
    result = ""
    while number > 0:
        for i in range(len(roman_values)):
            value = roman_values[i]
            if number >= value:
                result += roman_numerals[i] * (number // value)
                number %= value
    return result.lower()