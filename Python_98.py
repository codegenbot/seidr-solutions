```
def count_upper():
    s = input()
    return sum(1 for c in s if c.isupper())
print(count_upper())