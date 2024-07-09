def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result


numbers = []

while True:
    try:
        num = int(input())
        numbers.append(num)
    except:
        break

print(rolling_max(numbers))