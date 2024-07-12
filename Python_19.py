num_dict = {k: int(k) for k in "zero one two three four five six seven eight nine ten"}
def sort_numbers(numbers: str) -> str:
    return " ".join([str(num_dict[k]) for k in sorted([i for i in numbers.split() if i in num_dict])])