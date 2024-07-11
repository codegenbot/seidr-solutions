def check():
    numbers = input("Enter a list of integers separated by space: ").split()
    try:
        result = double_the_difference([int(i) for i in numbers])
        print(f"The difference between the sum of squares and twice the average of the even numbers is: {result}")
    except ValueError:
        print("Invalid input. Please enter integers only.")