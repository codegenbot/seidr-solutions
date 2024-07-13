from collections import OrderedDict

def remove_duplicates(numbers):
    return sorted(list(OrderedDict.fromkeys(map(int, numbers.split(",")))))

numbers = input("Enter comma-separated integers: ")
try:
    print(remove_duplicates(numbers))
except ValueError:
    print("Invalid input. Please enter only integers separated by commas.")