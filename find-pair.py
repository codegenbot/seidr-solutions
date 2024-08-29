```
def find_pair(input_lines):
    n = int(input_lines[0])
    numbers = list(map(int, input_lines[1].split()))
    target = int(input_lines[2])

    for i in range(n-1):
        for j in range(i+1, n):
            if numbers[i] + numbers[j] == target:
                return str(numbers[i]) + '\n' + str(numbers[j])
    
    return "No pair found"