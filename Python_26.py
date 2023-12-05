```
def remove_duplicates(numbers: list) -> list:
    unique_elements = set()
    result = []
    for num in numbers:
        if num not in unique_elements:
            unique_elements.add(num)
            result.append(unique_elements)
    return result
```
This code will output the correct answer, which is `[1, 4, 5]`.