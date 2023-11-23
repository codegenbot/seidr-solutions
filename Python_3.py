from typing import List, Union

def below_zero(operations: List[Union[int, float]]) -> bool:
    try:
        if not operations:
            return False
        
        balance = 0
        for operation in operations:
            balance -= operation
            if balance < 0:
                return True
        return False
    except:
        return False

input_str = input()
input_list = [float(num) for num in input_str.split()]
result = below_zero(input_list)
print(result)