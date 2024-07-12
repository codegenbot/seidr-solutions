def even_odd_count(num):
    num = str(abs(num)) # convert to string and remove negative sign
    evens = sum(digit % 2 == 0 for digit in num) # count even digits
    odds = len(num) - evens # count odd digits
    return (evens, odds)