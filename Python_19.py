def sort_numbers(numbers: str) -> str:
    return " ".join(
        sorted(
            numbers.split(),
            key=lambda x: [
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
            ].index(x),
        )
    )