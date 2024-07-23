```
def sorted_list_sum(numbers):
    return " ".join(sorted([num for num in numbers if num.isdigit() and int(num) % 2 == 0]))