while True:
    try:
        lst = input("Enter a list of numbers separated by space: ")
        lst = [int(num) for num in lst.split()]
        result = sum(i for i in lst if i % 2 != 0)
        print(f"The sum of all odd numbers in the given list is: {result}")
        break
    except ValueError:
        print("Invalid input. Please enter a list of numbers separated by space.")