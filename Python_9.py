```
def rolling_max(input_str: str) -> list[int]:
    numbers = []
    for num in input_str.split():
        if not num.isdigit():  
            return ["Invalid input"]  
        numbers.append(int(num))
    
    result = [max(numbers[:i+1]) for i in range(len(numbers))]
    return result