def rolling_max(numbers: List[List[int]]) -> List[int]:
    max_length = len(numbers[0])
    while True:
        command = input().split()
        if len(command) == 0 or command[0].lower() == 'stop':
            break
        num_input = [int(i) for i in command]
        if len(num_input) != max_length:
            print("Invalid input. Please provide the same number of elements in each list.")
            continue
        numbers.append(num_input)

    result = [max(row) for row in zip(*numbers)]
    return result