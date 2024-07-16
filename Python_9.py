input_numbers = list(map(int, input("Enter space-separated numbers: ").strip().split()))  
if not input_numbers:  
    print("Please provide space-separated numbers as input.") 
else:
    def rolling_max(input_numbers):
        max_nums = [max(input_numbers[:i+1]) for i in range(len(input_numbers))]  
        return max_nums  
    
    result = rolling_max(input_numbers)
    print(result)