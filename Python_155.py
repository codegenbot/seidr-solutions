```
def even_odd_count(num):
    num = abs(num)
    even = sum(1 for digit in str(num) if int(digit) % 2 == 0)
    odd = len(str(num)) - even
    return (even, odd)