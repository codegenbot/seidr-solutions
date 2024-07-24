def count_uppercase():
    s = input()
    return sum(1 for c in s if c.isupper())

result = count_uppercase()
print(result)