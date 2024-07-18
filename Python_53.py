def add(nums: list) -> int:
    return sum(nums)

inputs = list(map(int, input("Enter the numbers: ").split()))
result = add(inputs)
print(result)