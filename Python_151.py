```
def double_the_difference(lst):
    if len(set(lst)) > 1:
        return (max(lst) - min(lst)) * 2
    else:
        return None


def check():
    while True:
        try:
            numbers = list(map(int, input("Enter space-separated numbers: ").split()))
            if len(numbers) > 0:
                break
        except ValueError:
            print("Invalid input. Please enter space-separated numbers.")

    print(double_the_difference(numbers))


check()