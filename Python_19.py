def sort_numbers(numbers):
    if not re.match(r"^[a-zA-Z0-9]+$", numbers):
        return "Invalid input"
    numbers = [int(num) for num in re.findall(r"\d+", numbers)]
    sorted_numbers = sorted(numbers)
    return " ".join([str(num) for num in sorted_numbers])