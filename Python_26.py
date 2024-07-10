````
""" 
Problem: 
Remove duplicates from a list of numbers
Input: A list of integers
Output: The same list with duplicate numbers removed
"""
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return [x for n, x in enumerate(sorted(set(numbers))) if x not in numbers[:n]]