from collections import OrderedDict

def remove_duplicates(input_str=None):
    if input_str is None:
        numbers = input("Enter comma-separated numbers: ")
    else:
        numbers = ",".join(map(str, input_str))
    return list(OrderedDict.fromkeys(map(int, numbers.split(","))))