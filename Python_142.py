def sum_squares(lst):
    total_sum = 0
    for element in lst:
        if isinstance(element, dict):
            for key, value in element.items():
                if isinstance(value, (int, float)):
                    total_sum += abs(value) ** 2
                elif (
                    isinstance(value, list) and not isinstance(value[0], list) and value
                ):
                    total_sum += sum([x**2 for x in value])
        elif isinstance(element, list) and not isinstance(element[0], list) and element:
            total_sum += sum([x**2 for x in element])
        elif isinstance(element, (int, float)):
            total_sum += abs(element) ** 2
    return total_sum


def main():
    print(sum_squares([1, 2, 3]))


main()