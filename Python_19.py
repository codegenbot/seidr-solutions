def sort_numbers(numbers: str) -> str:
    num_map = {
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
    sorted_words = sorted(words, key=lambda word: num_map[word])
    return " ".join(sorted_words)