def sum_squares(lst):
    total_sum = 0
    for element in lst:
        if isinstance(element, dict):
            try:
                total_sum += sum_squares(list(element.values()))
            except TypeError:
                raise ValueError(
                    f"Invalid input '{element}' found. Input must contain only numbers."
                )
        elif isinstance(element, (int, float)):
            total_sum += abs(element) ** 2
        else:
            raise ValueError(
                f"Invalid input '{element}' found. Input must contain only numbers."
            )
    return total_sum


def main():
    print(sum_squares([1, 2, 3]))


if __name__ == "__main__":
    main()