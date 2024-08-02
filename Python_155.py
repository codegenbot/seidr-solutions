def even_odd_count(num):
    num = str(abs(num))
    even_count = sum(1 for i in num if int(i) % 2 == 0)
    odd_count = len(num) - even_count
    return (even_count, odd_count)