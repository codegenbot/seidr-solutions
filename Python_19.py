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
    
    nums = []
    for num in numbers.split():
        if num in num_dict:
            nums.append(num_dict[num])
        else:
            nums.append(int(num))
    
    return " ".join(sorted(map(str, nums)))