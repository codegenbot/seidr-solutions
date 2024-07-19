def even_odd_count(num):
    return (len([int(i) for i in str(num) if int(i) % 2 == 0]), len([int(i) for i in str(num) if int(i) % 2 != 0]))