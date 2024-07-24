```
import re

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
    
    nums = [num_dict.get(re.match(r"(\bzero|one|two|three|four|five|six|seven|eight|nine\b)(s?)\b", word).group(1)) for word in numbers.split()]
    
    return " ".join(map(str, sorted(nums)))