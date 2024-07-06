def rolling_max():
    numbers = input("Enter space-separated integers: ").split()
    try:
        numbers = [int(num) for num in numbers]
    except ValueError:
        print("Invalid input")
        return
    result = []
    max_so_far = numbers[0]
    for num in numbers:
        if num > max_so_far:
            max_so_far = num
        result.append(max_so_far)
    print(result)