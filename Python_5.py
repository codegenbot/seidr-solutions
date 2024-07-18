import sys

def intersperse(numbers, delimiter):
    def process_numbers(numbers, delimiter):
        return [item for sublist in [[num, delimiter] for num in numbers] for item in sublist][:-1]
    
    result = process_numbers(numbers, delimiter)
    return result

numbers = list(map(int, sys.argv[1:-1]))
delimiter = sys.argv[-1]

output = intersperse(numbers, delimiter)
print(output)