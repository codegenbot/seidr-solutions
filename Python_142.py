def sum_squares(lst):
    total_sum = 0
    if isinstance(lst, (int, float)):
        total_sum += abs(lst) ** 2
    elif isinstance(lst, list):
        for element in lst:
            if isinstance(element, dict):
                total_sum += sum([value**2 for key, value in element.items()])
            elif isinstance(element, list):
                total_sum += sum([x**2 for x in element])
            else:
                raise ValueError(
                    f"Invalid input '{element}' found. Input must contain only numbers."
                )
    return total_sum


def main():
    print(sum_squares([{"x": [2]}, {"y": [4]}]))


main()