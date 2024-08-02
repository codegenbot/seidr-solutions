```
def int_to_mini_roman(number):
    roman = {
        1: 'i', 4: 'iv', 5: 'v', 9: 'ix',
        10: 'x', 40: 'xl', 50: 'l', 90: 'xc',
        100: 'c', 400: 'cd', 500: 'd', 900: 'cm',
        1000: 'm'
    }
    result = ''
    for i in range(3, -1, -1):
        while number >= roman.get(i * 1000, float('inf')):
            result += roman[i * 1000]
            number -= i * 1000
        if number < 10:
            result += roman.get(number, '')
            break
        for j in range(3, 0, -1):
            while number >= roman.get(j * 100, float('inf')):
                result += roman[j * 100]
                number -= j * 100
            if number < 10:
                result += roman.get(number, '')
                break
    return result.lower()