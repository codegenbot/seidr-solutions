```
def remove_duplicates(numbers):
    unique_elements = set()
    for num in numbers:
        if num not in unique_elements:
            result.append(num)
            unique_elements.add(num)
    return result
```
This code will return the original list without duplicates. The `set` data structure is used to keep track of the unique elements, and the `seen.add(num)` line adds each element to the set as it is encountered in the list. If an element is already in the set, it means that it has been seen before and should not be added again.