from typing import List

def intersperse() -> List[int]:
    input_list = input().split()
    numbers = [int(num) for num in input_list]
    delimiter = int(input())
    
    interspersed = []
    for i in range(len(numbers)):
        interspersed.append(numbers[i])
        if i < len(numbers) - 1:
            interspersed.append(delimiter)
    
    return interspersed

result = intersperse()
print(result)