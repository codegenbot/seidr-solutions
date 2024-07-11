def check(func):
    result = func()
    return result


def sum_squares():
    num_list = list(map(int, input("Enter space-separated integers: ").split()))
    return sum([i**2 for i in num_list])


print(f"{check(sum_squares)}")