
def sort_numbers(numbers: str) -> str:
    numberals = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
    sorted_numbers = sorted([numberals.index(num) for num in numbers.split()])
    return ' '.join([numberals[i] for i in sorted_numbers])