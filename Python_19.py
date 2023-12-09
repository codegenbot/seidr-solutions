
def sort_numbers(input_string: str) -> str:
    numbers = [int(x) if x.isdigit() else 0 for x in input_string.split(" ")]
    return " ".join(str(x) for x in sorted(numbers))