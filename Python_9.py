from typing import List

def rolling_max():
    max_length = 0
    numbers = []
    while True:
        command = input("Enter numbers (stop to finish): ").split()
        if len(command) == 0 or command[0].lower() == 'stop':
            break
        num_input = [int(i) for i in command]
        if max_length == 0:
            max_length = len(num_input)
        elif len(num_input) != max_length:
            print("Invalid input. Please provide the same number of elements in each list.")
            continue
        numbers.append(num_input)

    result = [max(row) for row in zip(*numbers)]
    return result

print(rolling_max())