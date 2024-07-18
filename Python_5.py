def intersperse():
    numbers = list(map(int, input().split()))
    delimiter = input()
    
    def process_numbers(numbers, delimiter):
        return [
            item for sublist in [[num, delimiter] for num in numbers] for item in sublist
        ][:-1]
    
    result = process_numbers(numbers, delimiter)
    print(result)

intersperse()