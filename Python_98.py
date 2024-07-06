'''

def count_upper(s):
    return sum(1 for i, c in enumerate(s.upper()) if 'A' <= c <= 'E')

'''