def intersperse():
    numbers = list(map(int, raw_input().split()))
    delimiter = raw_input()
    
    result = process_numbers(numbers, delimiter)
    
    print(result)

intersperse()