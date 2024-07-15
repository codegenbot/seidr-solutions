def even_odd_count(num):
    even_count = len([int(x) for x in str(abs(num)) if int(x) % 2 == 0])
    odd_count = len([int(x) for x in str(abs(num)) if int(x) % 2 != 0])
    return (even_count, odd_count)