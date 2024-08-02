```
def check():
    lst = [1, 2, 3, 4, 5]
    expected_output = sum(i**2 for i in lst if isinstance(i, int) and i >= 0)
    result = double_the_difference(lst)
    if result == expected_output:
        print("Test passed")
    else:
        print("Test failed")