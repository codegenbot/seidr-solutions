def add(numbers):
    return sum(numbers)

print("Enter numbers separated by spaces:")
input_str = input()
if input_str:
    numbers = [int(num) for num in input_str.split()]
    result = add(numbers)
    print(result)
else:
    print("No input provided")