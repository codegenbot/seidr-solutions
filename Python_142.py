def check(func):
    result = func()
    return result


def calculate_sum_of_cubes():
    num_list = list(map(int, input("Enter space-separated integers: ").split()))
    return sum([i**3 for i in num_list])


print(f"{check(calculate_sum_of_cubes)}")