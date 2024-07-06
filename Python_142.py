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


def main():
    if all(isinstance(i, (int, float)) for i in [1, 2, 3]):
        print(sum([abs(i) ** 2 for i in [1, 2, 3]]))
    else:
        print(sum_squares([1, 2, 3]))


main()