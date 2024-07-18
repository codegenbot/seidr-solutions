def process_numbers(numbers, delimiter):
    return [
        item for sublist in [[num, delimiter] for num in numbers] for item in sublist
    ][:len(numbers) * 2 - 1]

def intersperse():
    numbers = list(map(int, input().split()))
    delimiter = input()
    
    result = process_numbers(numbers, delimiter)
    
    print(result)

intersperse()