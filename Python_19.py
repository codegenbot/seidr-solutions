import re

num_dict = {str(i): str(i) for i in range(10)}

def sort_numbers(numbers: str) -> str:
    return " ".join(sorted([num_dict[num] for num in re.findall('\d', numbers)]))