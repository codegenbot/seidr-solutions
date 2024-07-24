numbers = list(map(float, input().strip().split()))
if len(numbers) < 2:
    print("Please input at least two numbers.")
else:
    min_num = min(numbers)
    max_num = max(numbers)
    rescaled_numbers = [(x - min_num) / (max_num - min_num) for x in numbers]
    print(rescaled_numbers)