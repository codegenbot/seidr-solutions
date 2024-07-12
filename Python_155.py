def even_odd_count(num):
    even_count = len([int(digit) for digit in str(abs(num)) if int(digit) % 2 == 0])
    odd_count = len([int(digit) for digit in str(abs(num)) if int(digit) % 2 != 0])
    return (even_count, odd_count)