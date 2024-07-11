def double_the_difference(lst):
    result = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    assert result == 29, f"Expected double the difference of [5,3] to be {29} but got {result}"
    return result