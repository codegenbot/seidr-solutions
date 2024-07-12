def check(double_the_difference):
    lst = [1, 2, 3]
    odd_sum = sum(i for i in lst if isinstance(i, int) and i % 2 != 0)
    assert (
        double_the_difference(lst) == 2 * odd_sum
    ), f"Expected {2 * odd_sum} but got {double_the_difference(lst)}"
    print("Test passed.")


def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0) * 2