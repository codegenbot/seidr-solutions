def int_to_mini_roman(number):
    roman = {1: 'i', 4: 'iv', 5: 'v', 9: 'ix', 10: 'x', 40: 'xl', 50: 'l', 
             90: 'xc', 100: 'c', 400: 'cd', 500: 'd', 900: 'cm', 1000: 'm'}
    mini_roman = ''
    for num in range(number, 0, -1):
        while num >= roman.keys()[list(roman.keys()).index(num)]:
            mini_roman += roman[num]
            num -= roman[num]
    return mini_roman.lower()