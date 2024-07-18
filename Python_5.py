def intersperse(numbers, delimiter):
    def process_numbers(numbers, delimiter):
        return [item for sublist in [[num, delimiter] for num in numbers] for item in sublist][:-1]
    
    result = process_numbers(numbers, delimiter)
    return result

try:
    user_input = input()
    numbers, delimiter = user_input.split()[:-1], user_input.split()[-1]
    numbers = list(map(int, numbers))
    output = intersperse(numbers, delimiter)
    print(output)
except:
    print("Input format is incorrect. Please provide numbers separated by spaces followed by the delimiter character.")