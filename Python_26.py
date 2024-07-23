```
def remove_duplicates():
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    return list(set(numbers))