def sort_numbers(numbers: str) -> str:
    numbers = numbers.replace("-", " ")
    numbers = " ".join(filter(None, numbers.split()))
    sorted_numbers = sorted(
        [
            (
                10 * (num == "twenty" and 2 or (num == "ten" and 1 or 0))
                + num_dict.get(num, int(num))
            )
            for num in numbers.split()
        ]
    )
    return " ".join(map(str, sorted_numbers))