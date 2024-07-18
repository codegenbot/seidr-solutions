def intersperse():
    numbers = list(map(int, input().split()))
    delimiter = input()
    
    result = process_numbers(numbers, delimiter)
    
    print(result)

intersperse()