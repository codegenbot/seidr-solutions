from typing import List

def intersperse() -> List[int]:
    # Read inputs
    numbers = list(map(int, input().split()))
    delimiter = int(input())

    interspersed = []
    for i in range(len(numbers)):
        interspersed.append(numbers[i])
        if i < len(numbers) - 1:
            interspersed.append(delimiter)
    
    return interspersed

result = intersperse()
print(result)