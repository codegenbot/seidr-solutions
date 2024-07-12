def even_odd_count(num):
    even_count = len([int(d) for d in str(num) if int(d) % 2 == 0])
    odd_count = len([int(d) for d in str(num) if int(d) % 2 != 0])
    return (even_count, odd_count)