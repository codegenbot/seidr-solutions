def even_odd_count(num):
    count = [0, 0]
    while num > 0:
        if num % 2 == 0:
            count[0] += 1
        else:
            count[1] += 1
        num //= 10
    return tuple(count)