from collections import OrderedDict

def remove_duplicates(numbers):
    return sorted(list(OrderedDict.fromkeys(map(int, numbers))))

input_string = input("Enter the list of numbers separated by space: ")
numbers = list(map(int, input_string.split()))
print(remove_duplicates(numbers))