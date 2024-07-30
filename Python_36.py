from typing import List

def fizz_buzz(n: int) -> List[str]:
    result = []
    count = 0
    
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 == 0:
            result.append("FizzBuzz")
            count += 1
        elif i % 3 == 0:
            result.append("Fizz")
        elif i % 5 == 0:
            result.append("Buzz")
        else:
            result.append(str(i))
    
    return result, count