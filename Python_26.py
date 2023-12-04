```
def remove_duplicates(numbers: list) -> list:
    unique_nums = set()
    result = []
    for num in numbers:
        if num not in unique_nums:
            unique_nums.add(num)
            result.append(num)
    return result
```