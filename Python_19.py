def sort_numbers(numbers: str) -> str:
    numberals = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
    numbers = sorted([number for number in numbers if number in numberals], key=numberals.index)
    return " ".join(numbers)