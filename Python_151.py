```
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)

def check(expected_output):
    lst = [1, 3, 5]
    output = double_the_difference(lst)
    print(output == expected_output)

check(14)