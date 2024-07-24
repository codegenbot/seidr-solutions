s = input('''''')
def count_upper(s):
    return sum(1 for i, c in enumerate(s) if c.isupper() and i % 2 == 0)
print(count_upper(s))