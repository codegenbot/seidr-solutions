
def sort_numbers(numbers: str) -> str:
    numbers = [num.split() for num in numbers.split(' ')]
    numbers.sort(key=lambda x: int(x[0]))
    return " ".join(["".join(map(str, sorted(num))) for num in numbers])