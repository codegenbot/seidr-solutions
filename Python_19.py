import re

num_dict = {str(i): str(i) for i in range(10)}


def sort_numbers(input_str: str) -> str:
    numbers = [str(c) for c in input_str]
    matches = re.findall(r"\d", "".join(numbers).lower(), re.IGNORECASE)
    if not matches:
        return "No numbers found"
    return " ".join(sorted([num_dict[num] for num in matches]))