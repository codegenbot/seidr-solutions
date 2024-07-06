def sum_squares(lst):
    if isinstance(lst, dict):
        return sum(map(lambda x: sum_squares(x), lst.values()))
    elif not isinstance(lst, list) or len(lst) == 0:
        raise ValueError("Input must be a non-empty list")

    total_sum = 0
    for num in lst:
        if not isinstance(num, (int, float)):
            raise ValueError(
                f"Invalid input '{num}' found. Input must contain only numbers."
            )
        total_sum += abs(num) ** 2
    return total_sum


def main():
    print(sum_squares([1, 2, 3]))


if __name__ == "__main__":
    main()