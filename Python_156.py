```
def int_to_mini_roman(number):
    roman = ''
    val = [
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4,
        1
    ]
    syb = [
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV",
        "I"
    ]
    i = len(val) - 1
    while number > 0:
        for _ in range(number // val[i]):
            roman += syb[i]
            number -= val[i]
        i -= 1
    return roman.lower()