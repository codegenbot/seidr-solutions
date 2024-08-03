def solution(lst):
    """Return the sum of all odd numbers from every other element in the list starting from the second."""
    return sum(i for i in lst[1::2] if i % 2 != 0)