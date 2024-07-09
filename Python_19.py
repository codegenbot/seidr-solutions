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
        "nine": 9,
    }
    result = []
    for word in numbers.split():
        if word in num_dict:
            result.append(word)
    return " ".join(map(lambda x: str(num_dict[x]), sorted(result)))