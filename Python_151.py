```
def double_the_difference(lst):
    if len(lst) > 0:
        return (max(lst) - min(lst)) * 2


def check():
    while True:
        try:
            while True:
                numbers = list(map(int, input("Enter space-separated numbers: ").split()))
                if len(numbers) > 0:
                    break
            break
        except ValueError:
            print("Invalid input. Please enter space-separated numbers.")

    print(double_the_difference(numbers))


check()