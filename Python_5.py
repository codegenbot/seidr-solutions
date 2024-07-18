numbers = list(map(int, input("Enter numbers separated by space: ").split()))
delimiter = input("Enter delimiter: ")

def intersperse(numbers, delimiter):
    def process_numbers(numbers, delimiter):
        return [item for sublist in [[num, delimiter] for num in numbers] for item in sublist][:-1]
    
    result = process_numbers(numbers, delimiter)
    return result

output = intersperse(numbers, delimiter)
print(output)