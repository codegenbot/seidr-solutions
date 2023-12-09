def int_to_mini_roman(number):
    roman = ''
    while number > 0:
        if number >= 1000:
            roman += 'm'
            number -= 1000
        elif number >= 500:
            roman += 'd'
            number -= 500
        elif number >= 100:
            roman += 'c'
            number -= 100
        elif number >= 50:
            roman += 'l'
            number -= 50
        elif number >= 10:
            roman += 'x'
            number -= 10
        elif number >= 5:
            roman += 'v'
            number -= 5
        else:
            roman += 'i'
            number -= 1
    return roman