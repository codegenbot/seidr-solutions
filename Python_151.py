```Python
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)

def check():
    lst = [1, 2, 3, 4, 5]
    expected_output = 20
    result = double_the_difference(lst)
    if result == expected_output:
        print("Test passed")
    else:
        print("Test failed")