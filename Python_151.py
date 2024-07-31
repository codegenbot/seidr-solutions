```
def check(expected_output):
    lst = [2, 3, 4] 
    output = double_the_difference(lst)
    print(output == expected_output)

def double_the_difference(lst):
    result = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    return result * 2

check(12)