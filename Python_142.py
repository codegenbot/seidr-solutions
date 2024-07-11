```
def check(func):
    result = func()
    return result


def sum_squares():
    while True:
        try:
            num_list = list(map(int, input("Enter space-separated integers: ").split()))
            break
        except ValueError:
            print("Invalid input. Please enter valid numbers separated by spaces.")
    return sum([i**2 for i in num_list])


print(f"{check(sum_squares)}")