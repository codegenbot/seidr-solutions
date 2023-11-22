n = int(input())
m = int(input())


def probability_of_higher_roll(n, m):
    return (n - 1) / (n + m)


print(probability_of_higher_roll(n, m))