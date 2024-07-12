```
def sort_numbers(input_str: str) -> str:
    import re
    numbers = re.findall(r"\d+", input_str)
    if not numbers:
        return "No numbers found"
    for num in numbers:
        if not set(num).issubset(set('0123456789')):
            return "Non-numeric characters present, please provide valid input"
    return " ".join(sorted(map(str, set([int(num) for num in numbers]))))