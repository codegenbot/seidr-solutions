```
def even_odd_count(num):
    even = sum(1 for digit in str(abs(num)) if int(digit) % 2 == 0)
    odd = len(str(abs(num))) - even
    return (even, odd)