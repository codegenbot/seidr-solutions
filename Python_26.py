import typing as t

def remove_duplicates(numbers: t.List[int]) -> t.List[int]:
    # Use a set to keep track of the unique elements
    unique_elements = set()
    unique_list = []
    for num in numbers:
        if num not in unique_elements:
            unique_list.append(num)
            unique_elements.add(num)
    return unique_list
