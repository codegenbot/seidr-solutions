def even_odd_count(num):
    num = abs(num)
    evens = sum(1 for digit in str(num) if int(digit) % 2 == 0)
    odds = sum(1 for digit in str(num) if int(digit) % 2 != 0)
    return (evens, odds)