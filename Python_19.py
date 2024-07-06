
def sort_numbers(numbers):
    if not re.match(r"^[a-zA-Z0-9]+$", numbers):
        return "Invalid input"
    numbers = re.findall(r"\d+", numbers)
    numbers = [int(num) for num in numbers]
    sorted_numbers = sorted(numbers)
    return " ".join([str(num) for num in sorted_numbers])