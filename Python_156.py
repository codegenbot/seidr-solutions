def int_to_mini_roman(number):
    roman_numerals = ["i", "v", "x", "l", "c", "d", "m"]
    result = ""
    while number > 0:
        digit = number % 10
        if digit < 4:
            for _ in range(digit):
                result += roman_numerals[number % 7]
        elif digit == 4:
            result += roman_numerals[(number + 3) % 7]
        elif digit == 9:
            result += roman_numerals[(number - 2) % 7]
        number //= 10
    return result[::-1]