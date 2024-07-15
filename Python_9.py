numbers = list(map(int, input("Enter a list of numbers separated by spaces: ").strip().split()))
result = [max(numbers[i : i + 3]) for i in range(len(numbers) - 2)]
print(result)