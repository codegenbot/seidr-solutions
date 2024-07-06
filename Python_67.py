def fruit_distribution(s,n):
    s = s.replace('apples and', 'apples').replace('oranges', 'oranges').split()
    apples = int(s[-2].replace('apples', '')) if 'apples' in s else 0
    oranges = int(s[-1].replace('oranges', '')) if 'oranges' in s else 0
    return n - apples - oranges