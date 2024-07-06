def sort_numbers(numbers: str) -> str:
    number_list = numbers.split()
    return " ".join(str(number) for number in sorted(int(num) for num in number_list)))