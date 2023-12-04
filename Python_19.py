def sort_numbers(numbers: List[str]) -> str:
    numberals = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
    return " ".join(sorted([number for number in numbers if number in numberals]))