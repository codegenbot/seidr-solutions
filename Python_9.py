Here is the Python solution:

def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(i) for i in zip(*[[(n,) for n in numbers[i:] or [0]]for i in range(len(numbers))])]
    return result