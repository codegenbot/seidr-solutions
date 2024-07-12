import re

num_dict = {str(i): str(i) for i in range(10)}


def sort_numbers(input_str: str) -> str:
    numbers = [c for c in input_str if c.isdigit()]
    if not numbers:
        return "No numbers found"
    return " ".join(sorted([num_dict[num] for num in numbers]))