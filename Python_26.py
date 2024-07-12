```
def remove_duplicates(input_numbers=None):
    if input_numbers is None:
        input_numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    unique_numbers = set(map(str, input_numbers))
    return [int(x) for x in unique_numbers]

print(remove_duplicates([1, 2, 3, 2, 4, 3, 5]))