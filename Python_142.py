def sum_squares(lst):
    total_sum = 0
    for element in lst:
        if isinstance(element, dict):
            total_sum += sum_squares(list(element.values()))
        elif isinstance(element, (int, float)):
            total_sum += abs(element) ** 2
        else:
            raise ValueError(
                f"Invalid input '{element}' found. Input must contain only numbers."
            )
    return total_sum


def check(func):
    assert all(isinstance(x, (int, float)) for x in func([1, 2, 3])) and isinstance(
        func({}), int
    ), "Input list must not contain non-numeric elements."
    return func


@check
def main():
    print(sum_squares([1, 2, 3]))