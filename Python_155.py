def even_odd_count(num):
    num = str(abs(num))  # convert to string and remove negative sign
    evens = sum(1 for digit in num if int(digit) % 2 == 0)
    odds = len(num) - evens
    return (evens, odds)