def fruit_distribution(s,n):
    s = s.replace('apples', '0').replace('oranges', '1')
    values = list(map(int, [i for i in s.split() if i.isdigit()]))
    return n - sum(values)