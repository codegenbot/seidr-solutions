num_dict = {i: str(i) for i in range(10)}


def sort_numbers(numbers: str) -> str:
    return " ".join(
        [
            str(num_dict[int(k)])
            for k in sorted([int(i) for i in numbers.split() if i in num_dict])
        ]
    )