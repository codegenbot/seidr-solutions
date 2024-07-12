def sort_numbers(input_str: str) -> str:
    import re
    numbers = list(map(int, re.findall(r'\d+', input_str)))
    if not numbers:
        return "No numbers found"
    return ' '.join(map(str, sorted(numbers)))