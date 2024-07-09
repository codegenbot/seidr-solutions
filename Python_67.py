def fruit_distribution(s, n):
    s = s.lower()
    num_apples = int(''.join(filter(str.isdigit, s.split('apples')[1:].pop().split()[:1][0])) or 0) if 'apples' in s else 0
    return n - num_apples