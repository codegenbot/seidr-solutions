```
def sort_numbers(input_str: str) -> str:
    numbers = list(map(int, input_str.split()))
    return ' '.join(str(num) for num in sorted(numbers))