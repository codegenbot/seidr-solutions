def add(a, b):
    return a + b


while True:
    try:
        user_input = input("Enter two numbers separated by space or '/' for division: ")
        nums = list(map(int, user_input.split()))
        
        if len(nums) != 2:
            print("Invalid input. Please enter two numbers.")
            continue
            
        num1, num2 = nums
        
        if num2 == 0 and "/" not in user_input:
            print("Cannot divide by zero. Please enter a non-zero second number.")
            continue
            
        result = num1 / num2 if "/" in user_input else add(num1, num2)
        
        print(result)

    except KeyboardInterrupt:
        print("\nProgram interrupted by user. Exiting...")
        break
    except Exception as e:
        print("An error occurred:", e)