```
def even_odd_count(num):
    num = str(abs(num))
    even_count = sum(digit % 2 == 0 for digit in num)
    odd_count = len(num) - even_count
    return (even_count, odd_count)