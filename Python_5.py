def intersperse(numbers, delimiter):
    def process_numbers(numbers, delimiter):
        return [item for sublist in [[num, delimiter] for num in numbers] for item in sublist][:-1]
    
    result = process_numbers(numbers, delimiter)
    return result

numbers = list(map(int, input().split()))
delimiter = input()

output = intersperse(numbers, delimiter)
print(output)