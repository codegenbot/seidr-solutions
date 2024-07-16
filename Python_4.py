try:
    numbers = list(map(float, input("Enter the numbers separated by space: ").split()))
    if not numbers:
        raise ValueError
    print(sum(numbers))
except ValueError:
    print("Invalid input. Please enter numbers separated by space.")
except:
    print("Program did not receive expected input")