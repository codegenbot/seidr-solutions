try:
    numbers = list(map(float, input().split()))
    print(numbers)
except EOFError:
    print("Error: Program did not receive expected input.")
except ValueError:
    print("Error: Input format is incorrect. Please provide space-separated numbers.")