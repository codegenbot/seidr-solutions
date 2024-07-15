numbers = list(map(int, input("Enter a list of numbers separated by spaces, end to terminate: ").split()))
input_data = ""
while input_data != "end":
    input_data = input()

numbers = numbers[:numbers.index("end")]
numbers.sort()

min_diff = float("inf")
result = (0, 0)

for i in range(len(numbers) - 1):
    diff = numbers[i + 1] - numbers[i]
    if diff < min_diff:
        min_diff = diff
        result = (numbers[i], numbers[i + 1])

result