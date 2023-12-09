
def sort_numbers(numbers: str) -> str:
    return " ".join(str(x) for x in sorted(int(x) if x.isdigit() else 0 for x in numbers))
