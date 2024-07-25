def even_odd_count(num):
    even_count = sum(1 for digit in str(abs(num)) if int(digit) % 2 == 0)
    odd_count = sum(1 for digit in str(abs(num)) if int(digit) % 2 != 0)
    return (even_count, odd_count)