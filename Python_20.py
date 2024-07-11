def find_closest_elements(sorted_numbers: list[int], num: int) -> tuple[int]:
    left = binary_search(sorted_numbers, num)
    right = binary_search(sorted_numbers, num)

    while left > 0 and sorted_numbers[left - 1] >= num:
        left -= 1
    while right < len(sorted_numbers) - 1 and sorted_numbers[right + 1] > num:
        right += 1

    return (sorted_numbers[left], sorted_numbers[right])