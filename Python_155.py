```
def even_odd_count(num):
    num = str(abs(num))
    evens = sum(1 for d in num if int(d) % 2 == 0)
    odds = len(num) - evens
    return (evens, odds)