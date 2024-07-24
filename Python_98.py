s = input()
def count_upper(input_str):
    return sum(1 for i, c in enumerate(input_str) if c.isupper() and (i % 2 == 0 or i + 1 >= len(input_str)))
print(count_upper(s))