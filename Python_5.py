def intersperse():
    numbers = list(map(int, input().split()))
    delimiter = int(input())
    result = []
    for i in range(len(numbers)):
        if i > 0:
            result.append(delimiter)
        result.append(numbers[i])
    return result