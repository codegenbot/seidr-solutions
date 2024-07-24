s = input()
def count_upper():
    return sum(1 for c in s if c.isupper())
print(count_upper())