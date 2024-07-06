def sort_numbers(numbers: str) -> str:
    return " ".join(
        sorted(
            [
                n
                for n in numbers.split()
                if n
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