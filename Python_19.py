def sort_numbers(numbers: str) -> str:
    return " ".join(
        sorted(
            [
                num
                for num in numbers.split()
                if num
                in [
                    "zero",
                    "one",
                    "two",
                    "three",
                    "four",
                    "five",
                    "six",
                    "seven",
                    "eight",
                    "nine",
                ]
            ]
        )
    )