def sort_numbers(numbers: str) -> str:
    num_dict = {
        "zero": 0,
        "one": 1,
        "two": 2,
        "three": 3,
        "four": 4,
        "five": 5,
        "six": 6,
        "seven": 7,
        "eight": 8,
        "nine": 9,
    }
    words = numbers.split()
    sorted_words = [word for word in sorted([num_dict[word] for word in words])]
    return " ".join([key for key, value in sorted(zip(num_dict.keys(), sorted_words))])