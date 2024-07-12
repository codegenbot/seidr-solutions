import re
def sort_numbers(input_str: str) -> str:
    if not re.search(r'\b\d+\b', input_str):
        return "No numbers found"
    numbers = [int(num) for num in re.split(r'\s+', input_str) if num.isdigit()]
    return ' '.join(map(str, sorted(numbers)))