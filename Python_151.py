```Python
def double_the_difference(lst):
    total = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return total


def check(expected_output):
    actual_output = double_the_difference([1, 3, 5])
    assert expected_output == actual_output, f"Expected {expected_output}, but got {actual_output}"


check(35)