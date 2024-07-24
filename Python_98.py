```
s = input()
def count_upper(input_str):
    return sum(1 for c in input_str if c.isupper())
print(count_upper(s))