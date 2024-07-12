```
def rolling_max(numbers: list[int]) -> list[int]:
    result = []
    max_so_far = numbers[0]
    for num in numbers:
        if num > max_so_far:
            max_so_far = num
        result.append(max_so_far)
    return result

numbers = list(map(int, input("Enter space-separated integers: ").split()))

print(rolling_max(numbers))