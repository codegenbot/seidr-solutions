def sum_squares(lst):
    total_sum = 0
    for element in lst:
        if isinstance(element, dict):
            for key, value in element.items():
                if isinstance(value, (int, float)):
                    total_sum += abs(value) ** 2
                elif isinstance(value, list):
                    total_sum += sum([x**2 for x in sum_squares(value)])
        elif isinstance(element, list):
            total_sum += sum([x**2 for x in element])
        elif isinstance(element, (int, float)):
            total_sum += abs(element) ** 2
        else:
            raise ValueError(
                f"Invalid input '{element}' found. Input must contain only numbers."
            )
    return total_sum


def main():
    print(sum_squares([{"x": [2]}, {"y": [4]}]))


main()