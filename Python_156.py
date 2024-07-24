```
def int_to_mini_roman(number):
    roman = ''
    value = 1000
    roman_map = {
        1000: 'm', 900: 'cm', 500: 'd', 400: 'cd',
        100: 'c', 90: 'xc', 50: 'l', 40: 'xl',
        10: 'x', 9: 'ix', 5: 'v', 4: 'iv', 1: 'i'
    }
    while value > 0:
        for roman_value, roman_symbol in roman_map.items():
            while number >= value and value > 0:
                roman += roman_symbol
                number -= value
                value = int(value / 10)
    return roman.lower()