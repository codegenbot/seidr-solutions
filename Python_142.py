def calculate_sum_of_cubes():
    n = int(input("Enter a number: "))
    sum_of_cubes = sum(i**3 for i in range(1, n + 1))
    return sum_of_cubes


def check(num):
    if num < 1000000:
        return "The sum of cubes is less than 1 million."
    else:
        return "The sum of cubes is greater than or equal to 1 million."


print(check(calculate_sum_of_cubes()))