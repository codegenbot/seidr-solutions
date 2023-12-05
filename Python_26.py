def remove_duplicates(numbers):
    unique_elements = {}
    for num in numbers:
        if num not in unique_elements:
            unique_elements[num] = 1
        else:
            unique_elements[num] += 1
    return [k for k, v in unique_elements.items() if v == 1]