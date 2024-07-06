
def even_odd_count(num):
    count = (0, 0)
    while num > 0:
        if num % 10 % 2 == 0:
            count = (count[0] + 1, count[1])
        else:
            count = (count[0], count[1] + 1)
        num //= 10
    return count