
def sort_numbers(numbers: str) -> str:
    number_list = numbers.split()
    sorted_numbers = sorted(number_list)
    return " ".join(sorted_numbers)