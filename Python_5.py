def process_numbers(numbers, delimiter):
    return [item for sublist in [[num, delimiter] for num in numbers] for item in sublist][:-1]

def check(lst):
    return "".join(str(x) for x in lst)

def main(numbers, delimiter):
    return check(process_numbers(numbers, delimiter))

# Task description
numbers = [1, 2, 3, 4, 5]
delimiter = '-'
print(main(numbers, delimiter))