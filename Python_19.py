# Modified version of the `sort_numbers` function to accept a list of integers
def sort_numbers(numbers: List[int]) -> str:
    return " ".join(str(x) for x in sorted(numbers))

# Call the function with a list of integers
print(sort_numbers([1, 2, 3, 4, 5, 6]))