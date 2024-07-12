```
def count_upper(s):
    return sum(1 for i in range(len(s)) if i % 2 == 0 and s[i].upper() in 'AEIOU')