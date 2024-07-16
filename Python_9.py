print("Enter space-separated numbers:")
input_numbers = list(map(int, input().split()))  
def rolling_max(input_numbers):  
    max_nums = [max(input_numbers[:i+1]) for i in range(len(input_numbers))]  
    return max_nums  

result = rolling_max(input_numbers)  
print(result)  