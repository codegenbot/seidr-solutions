def find_pair(n, numbers):
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if numbers[i] + numbers[j] == int(input()):
                return str(numbers[i]) + "\n" + str(numbers[j])
    return "No pair found"