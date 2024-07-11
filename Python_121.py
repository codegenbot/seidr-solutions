```
while True:
    try:
        lst = input("Enter a list of numbers separated by space: ")
        lst = [int(num) for num in lst.split()]
        if len(lst) == 0 or min(lst) < 1 or max(lst) > 1000:
            print("Invalid input. Please enter a non-empty list of integers between 1 and 1000.")
        else:
            result = sum(i for i in lst if i % 2 != 0)
            print(f"The sum of all odd numbers in the given list is: {result}")
    except ValueError:
        print("Invalid input. Please enter a list of space-separated integers.")