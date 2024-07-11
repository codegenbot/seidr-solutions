def remove_duplicates():
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    seen = set()
    result = []
    for num in numbers:
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result