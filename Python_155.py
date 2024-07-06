def even_odd_count(num):
    num = str(abs(num)) # convert to string and remove negative sign
    even_count = sum(1 for digit in num if int(digit) % 2 == 0)
    odd_count = len(num) - even_count
    return (even_count, odd_count)