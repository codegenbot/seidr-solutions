def check(func):
    result = func()
    return result


def calculate_sum_of_cubes():
    num_list = input("Enter space-separated integers: ").split()
    
    try:
        return sum([int(i) ** 3 for i in num_list])
    except ValueError:
        return "Invalid input"


print(f"{check(calculate_sum_of_cubes)}")