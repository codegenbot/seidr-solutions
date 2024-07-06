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
    num_list = [num_dict[num] for num in numbers.split()]
    sorted_num_list = sorted(num_list)
    return " ".join([str(num) for num in sorted_num_list])