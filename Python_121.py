def find_odd_numbers_in_range():
    start = int(input("Enter the start of the range: "))
    end = int(input("Enter the end of the range: "))

    odd_numbers = [i for i in range(start, end+1) if i % 2 != 0]
    
    return len(odd_numbers)