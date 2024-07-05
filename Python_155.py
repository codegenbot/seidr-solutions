def even_odd_count(num):
    num = abs(num)
    evens, odds = 0, 0
    for digit in str(num):
        if int(digit) % 2 == 0:
            evens += 1
        else:
            odds += 1
    return (evens, odds)