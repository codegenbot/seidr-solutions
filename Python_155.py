def even_odd_count(num):
    even = sum(1 for i in str(abs(num)) if int(i) % 2 == 0)
    odd = len(str(abs(num))) - even
    return (even, odd)