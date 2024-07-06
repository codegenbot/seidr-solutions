'''
def count_upper(s):
    return sum(1 for i, c in enumerate(s) if 'A' <= c <= 'Z' and s[i].isupper())
'''