def sum_squares(lst):
    total_sum = 0
    if isinstance(lst, (int, float)):
        total_sum += abs(lst) ** 2
    elif isinstance(lst, list):
        for element in lst:
            if isinstance(element, dict):
                for value in element.values():
                    if isinstance(value, list):
                        total_sum += sum([x**2 for x in value])
                    else:
                        total_sum += value**2
            elif isinstance(element, list):
                total_sum += sum([x**2 for x in element])
    return total_sum


def main():
    print(sum_squares([{"x": [2]}, {"y": [4]}]))


main()