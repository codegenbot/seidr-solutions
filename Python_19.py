def sort_numbers(numbers: str) -> str:
    numberals = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
    numbers = [int(number) for number in numbers.split() if number in numberals]
    return " ".join(str(sorted(numbers)))