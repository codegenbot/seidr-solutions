def sum_squares(lst):
    if isinstance(lst, dict):
        return sum(map(lambda x: sum_squares(x), lst.values()))
    elif not isinstance(lst, list) or len(lst) == 0:
        raise ValueError("Input must be a non-empty list")

    total_sum = 0
    for element in lst:
        if isinstance(element, dict):
            if "data" not in element:
                total_sum += sum_squares(list(element.values()))
            else:
                total_sum += abs(element["data"]) ** 2
        elif not isinstance(element, (int, float)):
            raise ValueError(
                f"Invalid input '{element}' found. Input must contain only numbers."
            )
        else:
            total_sum += abs(element) ** 2
    return total_sum


def main():
    print(sum_squares([1, 2, 3]))


if __name__ == "__main__":
    main()