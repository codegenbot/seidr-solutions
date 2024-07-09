def even_odd_count(num):
    return (len([int(x) for x in str(num) if int(x) % 2 == 0]), len([int(x) for x in str(num) if int(x) % 2 != 0]))