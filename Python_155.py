def even_odd_count(num):
    num = str(abs(num))
    return tuple(map(lambda x: int(x), filter(str.isdigit, num)).count('0'), len(tuple(map(lambda x: int(x), filter(str.isdigit, num))))-len(set(map(lambda x: int(x), filter(str.isdigit, num))))))