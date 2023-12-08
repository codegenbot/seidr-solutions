```
def sort_numbers(numbers: str) -> str:
    nums = numbers.split()
    sorted_nums = sorted([int(x) for x in nums if x.isdigit()], key=lambda x: int(x))
    return " ".join(sorted_nums)
``` 