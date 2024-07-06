```
def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result

numbers = list(map(int, input("Enter the numbers separated by space: ").split()))
print(remove_duplicates(numbers))