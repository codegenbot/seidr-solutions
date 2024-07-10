def fruit_distribution(s,n):
    s = s.lower()
    n -= int(''.join(filter(str.isdigit, s))) + int(''.join(filter(str.isdigit, [i for i in s if 'apples' in i or 'oranges' in i]))))
    return n