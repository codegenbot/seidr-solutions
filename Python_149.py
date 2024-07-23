def sorted_list_sum(numbers):
    return " ".join(str(num) for num in sorted(map(int, filter(str.isdigit, str(numbers)))))