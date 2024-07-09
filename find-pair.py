def find_pair(n, numbers):
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(sum((numbers[i], numbers[j])) - n) < 0.001:
                return str(numbers[i]) + "\n" + str(numbers[j])
    return "No pair found"