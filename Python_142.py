```Python
def check(func):
    result = func()
    return result


def calculate_sum_of_cubes():
    while True:
        num_list = list(map(int, input("Enter space-separated integers: ").split()))
        if all(isinstance(i, int) for i in num_list):
            break
    return sum([i**3 for i in num_list])


print(f"{check(calculate_sum_of_cubes)}")