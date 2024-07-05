def sort_numbers(numbers: str) -> str:
    num_words = [
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
    num_dict = {word: i for i, word in enumerate(num_words)}
    sorted_numbers = sorted(numbers.split(), key=lambda x: num_dict[x])
    return " ".join(sorted_numbers)