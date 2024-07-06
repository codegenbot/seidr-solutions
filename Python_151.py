```python
def double_the_difference(lst):
    return sum(i - (i+1) for i in lst)

def check(func):
    input_list = [1, 2, 3]
    expected_result = 14
    result = func(input_list)
    print(result == expected_result)

check(double_the_difference)