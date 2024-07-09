```
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
        "nine": 9
    }
    result = []
    for word in numbers.split():
        if word.lower() in num_dict:
            result.append(str(num_dict[word.lower()]))
    return " ".join(sorted(result))