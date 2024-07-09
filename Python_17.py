from typing import List


# Add function signature and task description here
def find_duplicates(nums: List[int]) -> List[int]:
    """
    Given a list of integers, return a new list containing all duplicate elements in the input list.

    Args:
    nums: A list of integers

    Returns:
    A list of integers containing duplicate elements
    """
    duplicates = []
    seen = set()

    for num in nums:
        if num in seen:
            duplicates.append(num)
        else:
            seen.add(num)

    return duplicates