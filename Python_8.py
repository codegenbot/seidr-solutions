try:
    numbers = []
    try:
        numbers = [int(x) for x in input("Enter the numbers separated by space: ").split()]
    except (ValueError, TypeError):
        print("Input error. Please enter valid input.")
    
    n = len(numbers)

    res = sum(num for num in numbers if num % 2 == 0)
    print(res)
except (ValueError, TypeError):
    print("Input error. Please enter valid input.")