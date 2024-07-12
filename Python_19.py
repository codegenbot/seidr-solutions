num_dict = {str(i): str(i) for i in range(10)}
def sort_numbers(numbers: str) -> str:
    return " ".join([num_dict[num] for num in sorted([n for n in numbers.split() if n in num_dict])])