from collections import OrderedDict

def remove_duplicates(numbers):
    return sorted(list(OrderedDict.fromkeys(map(int, numbers.split()))))

numbers = input("Enter space-separated integers: ")
print(remove_duplicates(numbers))