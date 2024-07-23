def sorted_list_sum(numbers):
    even_numbers = sorted(
        [
            num
            for num in numbers
            if isinstance(num, str) and str(num).isnumeric() and int(str(num)) % 2 == 0
        ]
    )
    return " ".join(map(str, even_numbers))