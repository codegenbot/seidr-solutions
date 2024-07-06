
def int_to_mini_roman(number):
    if number < 1 or number > 1000:
        raise ValueError("Number must be between 1 and 1000")
    
    roman_numerals = {
        1: 'i',
        5: 'v',
        10: 'x',
        50: 'l',
        100: 'c',
        500: 'd',
        1000: 'm'
    }
    
    roman_string = ""
    while number > 0:
        for value, numeral in roman_numerals.items():
            if number >= value:
                roman_string += numeral * (number // value)
                number %= value
    
    return roman_string
