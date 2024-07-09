n = int(input("Enter the number of elements: "))
numbers = [int(input("Enter element: ")) for _ in range(n)

def rolling_max(numbers):
    return [max(numbers[i : i + 3]) for i in range(len(numbers) - 2)]

print(rolling_max(numbers))