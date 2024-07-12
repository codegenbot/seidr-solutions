import re

num_dict = {str(i): str(i) for i in range(10)}

def sort_numbers(numbers: str) -> str:
    matches = re.findall('\d', numbers)
    if not matches:
        return "No numbers found"
    return " ".join(sorted([num_dict[num] for num in matches]))