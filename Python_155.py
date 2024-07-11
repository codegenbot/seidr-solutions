def even_odd_count(num):
    num = str(abs(num))  # convert number to string and take absolute value
    evens = sum(digit % 2 == 0 for digit in num)
    odds = len(num) - evens
    return (evens, odds)