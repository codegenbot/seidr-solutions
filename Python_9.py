def rolling_max():
    numbers = [int(num) for num in input("Enter space-separated integers: ").split()]
    result = []
    max_so_far = numbers[0]
    for num in numbers:
        if num > max_so_far:
            max_so_far = num
        result.append(max_so_far)
    print(result)

rolling_max()