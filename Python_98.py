```
name = input("Enter your name: ")
def count_upper(s):
    return sum(1 for i, c in enumerate(s) if 'A' <= c.upper() <= 'E')
print(count_upper(name))