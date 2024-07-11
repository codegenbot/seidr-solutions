```
try:
    while True:
        try:
            lst = input("Enter a list of numbers separated by spaces: ")
            if not lst:
                print("Please enter some numbers.")
                continue
            if len(lst) == 0:
                print("No numbers were entered, the program will terminate now.")
                break

            while any(char not in "0123456789 " for char in lst):
                print("Invalid input. Please enter only digits and spaces.")
                lst = input("Enter a list of numbers separated by spaces: ")

            lst = [int(i) for i in lst.split()]
            result = sum([i**2 for i in lst])
            print(result)
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")
except ValueError:
    print("Program did not receive expected input. Please enter numbers separated by spaces.")