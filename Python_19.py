
def sort_numbers(numbers: str) -> str:
    numberals = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
    numbers = [int(number) for number in numbers.split()]
    return " ".join([str(number) for number in sorted(numbers)])