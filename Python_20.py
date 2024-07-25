try:
    numbers = list(map(float, input().split()))
    if len(numbers) != 2:
        raise ValueError("Error: Input should contain exactly 2 numbers")
    result = numbers[0] + numbers[1]
    print(result)
except ValueError as e:
    print(e)
except:
    print("Error: Input format is incorrect. Please provide space-separated numbers.")