def even_odd_count(num):
    num = str(abs(num))
    even = sum(1 for d in num if int(d) % 2 == 0)
    odd = len(num) - even
    return (even, odd)