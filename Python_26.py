def remove_duplicates(numbers):
    unique_elements = []
    for num in numbers:
        if num not in unique_elements:
            unique_elements.append(num)
    return unique_elements