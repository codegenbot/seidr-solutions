def count_up_to(n):
    numbers = list(range(2, n+1))
    for i in range(2, int(n**0.5) + 1):
        if i % numbers[i] == 0:
            numbers[i] = False
    return [i for i in numbers if i]