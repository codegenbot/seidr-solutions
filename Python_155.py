def even_odd_count(num):
    num = str(abs(num))
    even = sum(1 for i in num if int(i)%2==0)
    odd = len(num) - even
    return (even, odd)