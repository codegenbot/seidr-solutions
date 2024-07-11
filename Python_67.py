def fruit_distribution(s,n):
    s = s.replace('apples', '0').replace('oranges', '1')
    apples_count = int(s.split()[2].split(' ')[-1]) if 'apples' in s else 0
    oranges_count = int(s.split()[4].split(' ')[-1]) if 'oranges' in s else 0
    return n - apples_count - oranges_count