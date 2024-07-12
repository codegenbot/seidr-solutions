num_dict = {str(i): str(i) for i in range(10)}


def sort_numbers(numbers: str) -> str:
    return " ".join(
        [
            num_dict[num]
            for num in sorted([num for num in numbers.split() if num in num_dict])
        ]
    )