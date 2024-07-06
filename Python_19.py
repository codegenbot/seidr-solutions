
def sort_numbers(numbers: str) -> str:
    number_list = numbers.split()
    number_list.sort()
    return " ".join(number_list)