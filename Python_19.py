```
num_dict = {"zero": 0, "one": 1, "two": 2, "three": 3, "four": 4, "five": 5, "six": 6, "seven": 7, "eight": 8, "nine": 9}

def sort_numbers(input_string):
    return sorted([num_dict[i] for i in input_string.split()])

input_string = input("Enter a string with numbers (zero-nine): ")
print(sort_numbers(input_string))