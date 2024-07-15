try:
    n = int(input("Enter the total count of numbers: "))
    print("Enter the numbers separated by space:")
    numbers = list(map(int, input().split()))
    
    if len(numbers) != n:
        raise ValueError
        
    res = sum(num for num in numbers if num % 2 == 0)
    print(res)
except (ValueError, TypeError):
    print("Input error. Please enter valid input.")