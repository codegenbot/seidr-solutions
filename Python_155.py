def even_odd_count(num):
    even = sum(digit % 2 == 0 for digit in str(abs(num)))
    odd = len(str(abs(num))) - even
    return (even, odd)