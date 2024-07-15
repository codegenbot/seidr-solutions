numbers = list(map(float, input("Enter numbers separated by space: ").split()))  
result = min(numbers, key=lambda x: abs(x))  
print(result)