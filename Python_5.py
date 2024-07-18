def intersperse(numbers, delimiter):
    def process_numbers(numbers, delimiter):
        return [item for sublist in zip(numbers, [delimiter]*len(numbers)) for item in sublist][:-1]
    
    result = process_numbers(numbers, delimiter)
    return result

numbers = list(map(int, input().strip().split()))
delimiter = input().strip()

output = intersperse(numbers, delimiter)
print(output)