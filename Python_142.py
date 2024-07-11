```
def calculate_sum_of_cubes():
    n = int(input("Enter a number: "))
    sum_of_cubes = sum(i**3 for i in range(1, n+1))
    return sum_of_cubes

def check(result):
    if result > 1000000:
        print("The sum of cubes is greater than 1 million.")
    else:
        print("The sum of cubes is not greater than 1 million.")

print(check(calculate_sum_of_cubes()))