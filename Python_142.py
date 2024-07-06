def sum_squares(lst):
    total_sum = 0
    for element in lst:
        if isinstance(element, dict):
            for value in element.values():
                if isinstance(value, (list, dict)):
                    total_sum += sum(abs(x) ** 2 for x in value)
                elif isinstance(value, (int, float)):
                    total_sum += abs(value) ** 2
                else:
                    raise ValueError(
                        f"Invalid input '{value}' found. Input must contain only numbers."
                    )
        elif isinstance(element, list):
            for sub_element in element:
                total_sum += abs(sub_element) ** 2
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