def basement(input):
    input = list(map(int, input.split()))
    for i in range(len(input)):
        if sum(input[: i + 1]) < 0:
            return i
    return -1