def count_uppercase_chars(s):
    return sum(1 for c in s if c.isupper())

s = input()
print(count_uppercase_chars(s))