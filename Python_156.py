```
def int_to_mini_roman(number):
    roman = ''
    roman_map = {
        1000: 'm', 900: 'cm', 500: 'd', 400: 'cd',
        100: 'c', 90: 'xc', 50: 'l', 40: 'xl',
        10: 'x', 9: 'ix', 5: 'v', 4: 'iv', 1: 'i'
    }
    
    for value, roman_value in roman_map.items():
        while number >= value:
            roman += roman_value
            number -= value
    
    return roman.lower()