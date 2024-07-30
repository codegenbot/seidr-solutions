import statistics

def stdev(numbers):
    return statistics.stdev(numbers)

while True:
    try:
        user_input = input("Enter numbers separated by spaces: ")
        
        if not user_input:
            raise Exception("Please enter at least two valid numbers separated by spaces.")
            
        numbers = list(map(float, user_input.split()))
        
        if len(numbers) < 2:
            raise Exception("Please enter at least two valid numbers separated by spaces.")
            
        result = stdev(numbers)
        print("Standard Deviation:", result)
        break
    except (ValueError, Exception) as e:
        print("Error:", e)