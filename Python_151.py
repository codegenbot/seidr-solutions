def check():
    numbers = input("Enter space-separated numbers: ").split()
    try:
        numbers = [int(num) for num in numbers]
    except ValueError:
        print("Invalid input. Please enter integers only.")
        return
    result = double_the_difference(numbers)
    if result == 0:
        print("No such number exists.")
    else:
        print(f"The doubled difference is {result}.")