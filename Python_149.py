def sorted_list_sum(numbers):
    odd_numbers = [str(num) for num in numbers if isinstance(num, int) and num % 2 != 0]
    odd_numbers.sort()
    return " ".join(odd_numbers)