```
s = input()
def count_upper(s):
    return sum(1 for c in s if 'A' <= c <= 'E')
print(count_upper(s))