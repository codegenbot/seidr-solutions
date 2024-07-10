def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    max_num = float("-inf")

    for num in numbers:
        max_num = max(max_num, num)
        max_numbers.append(max_num)

    return max_numbers

# Read a list of integers from the user
numbers = list(map(int, input().split()))

# Call the rolling_max function with the input list and print the result
print(rolling_max(numbers))