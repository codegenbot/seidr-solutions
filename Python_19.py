def sort_numbers(numbers: str) -> str:
    words = [
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
    num_dict = {word: i for i, word in enumerate(words)}
    sorted_nums = sorted([num_dict[word] for word in numbers.split()])
    return " ".join(words[i] for i in sorted_nums)