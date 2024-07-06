```
def double_the_difference(lst):
    return [(x - min(lst)) * 2 + min(lst) for x in lst]

lst = """Enter a list of numbers: """.strip().split()
lst = [int(x) for x in lst]
print(double_the_difference(lst))