def add(numbers: list):
    return sum(numbers)

num_test_cases = int(input())

for _ in range(num_test_cases):
    numbers = [int(num) for num in input().split()]
    result = add(numbers)
    print(result)