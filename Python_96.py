def count_up_to(n):
    # create a list of all numbers from 2 to n
    numbers = list(range(2, n + 1))

    # iterate through the list and mark composite numbers
    for i in range(2, int(n**0.5) + 1):
        if i % numbers[i] == 0:
            numbers[i] = False

    # return the remaining prime numbers
    return [i for i in numbers if i]