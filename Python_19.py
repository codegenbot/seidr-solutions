import re

num_dict = {str(i): str(i) for i in range(10)}

def sort_numbers(input_str: str) -> str:
    numbers = [int(num) for num in re.findall(r"\d+", input_str)]
    if not numbers:
        return "No numbers found"
    return " ".join(sorted(map(str, set(numbers))))