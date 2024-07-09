def even_odd_count(num):
    count = [0, 0]
    for digit in str(abs(num)):
        if int(digit) % 2 == 0:
            count[0] += 1
        else:
            count[1] += 1
    return tuple(count)