def sum_squares(lst):
    total_sum = 0
    for element in lst:
        if isinstance(element, dict):
            total_sum += sum(
                value**2
                for value in element.values()
                if isinstance(value, (int, float))
            )
        elif isinstance(element, list):
            if len(element) > 1:  
                raise ValueError("Lists within the input must contain only one element.")
            total_sum += sum_squares([element[0]])
        elif isinstance(element, (int, float)):
            total_sum += abs(element) ** 2
        else:
            raise ValueError(f"Invalid input '{element}' found. Input must contain only numbers.")
    return total_sum


def main():
    print(sum_squares([{"x": [2]}, {"y": [4]}]))


main()