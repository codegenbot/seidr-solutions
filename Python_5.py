```
def process_numbers():
    delimiter = ","
    user_input = input("Enter numbers separated by delimiter (use '-' for none): ").replace('-', delimiter)
    numbers = [int(num) for num in user_input.split(delimiter)]
    result = [numbers[0]]
    
    for num in numbers[1:]:
        if num == int(delimiter):
            result.append(num)
        else:
            while len(result) > 1 and result[-1] == delimiter:
                result.pop()
            result.extend([delimiter, num])
    return result

print(process_numbers())