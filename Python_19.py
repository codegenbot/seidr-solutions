
def sort_numbers(numbers: str) -> str:
    number_list = numbers.split()
    number_list.sort(key=lambda x: int(x))
    return " ".join(number_list)