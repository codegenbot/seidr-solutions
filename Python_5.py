from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)
    return result

if __name__ == "__main__":
    try:
        inputs = list(map(int, input("Enter the numbers followed by the delimiter: ").strip().split()))
        if len(inputs) < 2:
            raise ValueError("Insufficient input.")
        numbers = inputs[:-1]
        delimiter = inputs[-1]
        result = intersperse(numbers, delimiter)
        print(' '.join(map(str, result)))
    except Exception as e:
        print(f"Error: {e}")